#include<iostream>
#include "Comercio.h"
#include <fstream>
#include <stdlib.h>
using namespace std;

int main () {
	
	/*
	
	ATENCION YULI TIENE QUE HACER QUE SE GUARDE MATERIA PRIMA, SOLO FIJISES
	PORQUE NO SE ESTA GUARDANDO BIEN, SEGURO ES ALGO QUE ESTA MAL PUESTO
	PERO SI CHOFER SE PUEDE MATERIA TAMBIEN, TEQUIERO MUCHA SUERTE ME VOY A COMER
	
	*/
	fstream archivo("registro.txt");
	Comercio* comercio = new Comercio();
	int opc = 0, a = 0;
	string nombreProvedor, nombreChofer, nombreRuta, nombreMateria;
	int cantidadMateria, precioMateria, cantVenta;
	Proveedor* proveedor; 
	Rutas* ruta;
	Chofer* chofer;
	MateriaPrima* materia;
	
	comercio->RuPrede();
	comercio->materiaProvePrede();
	
	for(;;){
		
		system("cls");
		cout<<"Inventario: \n";
		cout<<"---------------------------------------\n";
		cout<<"1. Administrar materia prima y proveedor. \n";
		cout<<"2. Administrar chofer y asignar ruta. \n";
		cout<<"3. Vender producto. \n";
		cout<<"4. Listado de materias primas y proveedores.\n";
		cout<<"5. Listado de choferes y rutas.\n";
		cout<<"6. Salir.\n";
		cout<<"---------------------------------------\n";
		cout<<"Digite la opcion que desea realizar: \n";
		cin>>opc;
		
		
		switch(opc){
		case 1: 
			system("cls");
			
			cout << "Agregando nuevo proveedor: \n";
			cout << "Digite el nombre del proveedor:";
			cin >> nombreProvedor;
			proveedor = new Proveedor(nombreProvedor);
			comercio -> agregarProveedor(proveedor);
			
			
			cout<<"\nProducto que va a proporcionar "<<nombreProvedor<<" al inventario: ";
			cin>>nombreMateria;
			
			cout<<"\nPrecio del producto: ";
			cin>>precioMateria;
			
			cout<<"\nADVERTENCIA: Se tiene que agregar un minimo de 20 unidades por producto.\n";
			cout<<"Cantidad de este producto que se va a registrar: ";
			cin>>cantidadMateria;
		
			if(cantidadMateria<20){
				
				cout<<"\nProveedor y articulos agregados con exito al inventario.\n";
				
				cout<<comercio->listadoProveedores();
				cout<<endl;
				cout<<comercio->listadoMateriaPrima();
			}else{
				while(cantidadMateria<20){
					
					cout<<"Cantidad de articulos no permitida.\n";
					cout<<"Si quiere volver a intentarlo digite 1, digite cualquier otro numero para cancerla la operacion.\n";
					cin>>a;
					
					if(a==1){
						cout<<"ADVERTENCIA: Se tiene que agregar un minimo de 20 unidades por producto.\n";
						cout<<"Cantidad de este producto que se va a registrar: ";
						cin>>cantidadMateria;
						
						materia = new MateriaPrima(cantidadMateria,nombreMateria,proveedor,precioMateria);
						comercio->agregarMateriaPrima(materia);
						
						cout<<"\nProveedor y articulos agregados con exito al inventario.\n";
						
						cout<<comercio->listadoProveedores();
						cout<<endl;
						cout<<comercio->listadoMateriaPrima();
						
						
					}else{
						break;
					}
					
				}
			}
			system("pause");
			break;
		case 2:
			system("cls");
			
			cout<<"Agregando chofer: \n";
			cout<<"Digite el nombre del chofer:";
			cin>>nombreChofer;
			
			cout<<"\n" << comercio->listadoRutas() << endl;
			cout<<"Digite la ruta que va a hacer el chofer o agregue una nueva: \n";
			cin>>nombreRuta;
			
			if(comercio->recuperarRuta(nombreRuta) != nullptr){
				ruta = comercio->recuperarRuta(nombreRuta);
				
			}else{
				ruta = new Rutas(nombreRuta);
				comercio->agregarRutas(ruta);
			}
			
			chofer = new Chofer(nombreChofer,ruta);
			comercio->agregarChofer(chofer);
			
			cout<<"El chofer "<<chofer->getNombre()<<" con ruta hacia "<<ruta->getNombre()<<" fue agregado correctamente.\n";
			
			system("pause");
			break;
		case 3:
			system("cls");
			if(!archivo.is_open()){
				archivo.open("registro.txt", ios::out);
			}
			cout<<"Venta:\n";
			cout<<comercio->listadoMateriaPrima()<<endl;
			
			cout<<"Digite el nombre del articulo que quiere vender: ";
			cin>>nombreMateria;
			materia = comercio->recuperarMateria(nombreMateria);
			
			cout<<"Datos del articulo: \n";
			cout<<materia->toString();
			
			cout<<"Cuanta existencia desea vender: \n";
			cin>>cantVenta;
			
			cout<<comercio->venta(nombreMateria,cantVenta);
			
			archivo << "Materia Vendida: " << nombreMateria << endl;
			archivo << "Cantidad Vendida: " << cantVenta << endl;
			archivo << endl;
			
			archivo.close();
			system("pause");
			break;
		case 4:
			system("cls");
			cout<<"Listado de materia prima.\n";
			cout<<comercio->listadoMateriaPrima();
			cout<<"\nListado de proveedores.\n";
			cout<<comercio->listadoProveedores();
			system("pause");
			break;
		case 5:
			system("cls");
			cout<<"Listado de choferes.\n";
			cout<<comercio->listadoChoferes();
			cout<<"\nListado de Rutas.\n";
			cout<<comercio->listadoRutas();
			system("pause");
			break;
		case 6:
			system("cls");
			cout<<"Saliendo del programa.";
			return 0;
			system("pause");
			break;
		default: 
			system("cls");
			system("pause");
		}
		
	}
	//	ofstream salida("datos.txt");
	//	cout<<"Los datos se guardaron exitosamente ...";
	//	comercio->guardar(salida);
	//	salida.close();
	
	
	
	//	ifstream entrada("datos.txt");
	//	MateriaPrima* materiaPrimaNueva = new MateriaPrima(entrada);
	//	cout << materiaPrimaNueva -> toString();
	//	entrada.close();
	
	delete comercio;
}
