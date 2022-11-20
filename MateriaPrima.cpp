#include "MateriaPrima.h"
#include <sstream>
using std::stringstream;

MateriaPrima::MateriaPrima(int cantidad,string nombre,Proveedor* proveedor,int precio)
	: cantidad(cantidad),nombre(nombre),cantMinima(20),proveedor(proveedor), precio(precio){
	
}

MateriaPrima::~MateriaPrima() {
	
}

string MateriaPrima::toString(){
	stringstream r;
	r <<"Materia Prima: " <<  nombre <<"\n";
	r <<"Cantidad: " <<  cantidad <<"\n";
	r <<"Precio: "<< precio <<"\n";
	return r.str();
}

string MateriaPrima::getNombre ( ) {
	return nombre;
}

int MateriaPrima::getPrecio(){
	return precio;
}

bool MateriaPrima::minimo(){
	return cantidad<cantMinima;
}

double MateriaPrima::pagar(int cantVendida){
	cantidad -= cantVendida;
	return cantVendida*precio;
}
