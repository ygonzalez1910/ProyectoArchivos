#include "MateriaPrima.h"
#include <sstream>
using std::stringstream;

MateriaPrima::MateriaPrima(int cantidad,string nombre,Proveedor* proveedor,int precio)
	: cantidad(cantidad),nombre(nombre),cantMinima(20),cantVendida(0),proveedor(proveedor), precio(precio){
	
}

MateriaPrima::~MateriaPrima() {
	
}

string MateriaPrima::toString(){
	stringstream r;
	r <<"-----------------------------\n";
	r <<"Materia Prima: " <<  nombre <<"\n";
	r <<"Cantidad: " <<  cantidad <<"\n";
	r <<"Precio: "<< precio <<"\n";
	r <<"-----------------------------\n";
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

double MateriaPrima::pagar(int cantidadVendida){
	
	setCantVendida(cantidadVendida);
	cantidad -= cantidadVendida;
	return cantidadVendida*precio;
}

void MateriaPrima::setCantVendida(int cantVendida){
	this->cantVendida=cantVendida;
}

int MateriaPrima::getCantVendida(){
	return cantVendida;
}
