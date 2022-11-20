#include "ListaRutas.h"
#include <sstream>
using std::stringstream;

ListaRutas::ListaRutas():primero(nullptr), actual(nullptr) {
	
}

ListaRutas::~ListaRutas() {
	
}

void ListaRutas::agregarRutas(Rutas* dato){
	primero = new NodoRutas(dato,primero);
}

string ListaRutas::toString(){
	stringstream r;
	Rutas* Rutas;
	actual = primero;
	while(actual != nullptr){
		Rutas = actual->getDato();
		r << Rutas->toString();
		actual = actual->getSiguiente();
	}
	return r.str();
}

Rutas* ListaRutas::recuperarRutas(string nombreRutas){
	Rutas* Rutas;
	actual = primero;
	while(actual != nullptr){
		Rutas = actual->getDato();
		if(Rutas != nullptr && Rutas->getNombre()== nombreRutas){
			return Rutas;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
