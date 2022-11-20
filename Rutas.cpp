#include <sstream>
using std::stringstream;

#include "Rutas.h"

Rutas::Rutas(string nombre): nombre(nombre) {
	
}

Rutas::~Rutas() {
	
}

string Rutas::toString(){
	stringstream r;
	r <<"Rutas: " <<  nombre <<"\n";
	return r.str();
}

string Rutas::getNombre ( ) {
	return nombre;
}
