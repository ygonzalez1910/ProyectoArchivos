#include <sstream>
using std::stringstream;
#include "Proveedor.h"

Proveedor::Proveedor(string nombre): nombre(nombre) {
	
}

Proveedor::~Proveedor() {
	
}

string Proveedor::toString(){
	stringstream r;
	r <<"Proveedor: " <<  nombre <<"\n";
	return r.str();
}

string Proveedor::getNombre ( ) {
	return nombre;
}
