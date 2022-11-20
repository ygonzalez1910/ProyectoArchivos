#include <sstream>
using std::stringstream;

#include "Chofer.h"

Chofer::Chofer(string nombre, Rutas* ruta): nombre(nombre),ruta(ruta) {
	
}

Chofer::~Chofer() {
	
}

string Chofer::toString(){
	stringstream r;
	r <<"Chofer: " <<  nombre <<"\n";
	r <<ruta->toString();
	return r.str();
}

string Chofer::getNombre ( ) {
	return nombre;
}


