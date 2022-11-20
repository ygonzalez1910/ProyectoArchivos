#include <sstream>
using std::stringstream;

#include "ListaChofer.h"

ListaChofer::ListaChofer():primero(nullptr), actual(nullptr) {
	
}

ListaChofer::~ListaChofer() {
	
}

void ListaChofer::agregarChofer(Chofer* dato){
	primero = new NodoChofer(dato,primero);
}

string ListaChofer::toString(){
	stringstream r;
	Chofer* Chofer;
	actual = primero;
	while(actual != nullptr){
		Chofer = actual->getDato();
		r << Chofer->toString();
		actual = actual->getSiguiente();
	}
	return r.str();
}

Chofer* ListaChofer::recuperarChofer(string nombreChofer){
	Chofer* Chofer;
	actual = primero;
	while(actual != nullptr){
		Chofer = actual->getDato();
		if(Chofer != nullptr && Chofer->getNombre()== nombreChofer){
			return Chofer;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}

