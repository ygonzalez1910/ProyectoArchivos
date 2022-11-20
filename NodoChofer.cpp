#include "NodoChofer.h"

NodoChofer::NodoChofer(Chofer* dato, NodoChofer* siguiente)
	: dato(dato), siguiente(siguiente) {
	
}

NodoChofer::~NodoChofer() {
	
}

NodoChofer* NodoChofer::getSiguiente(){
	return siguiente;
}

Chofer* NodoChofer::getDato(){
	return dato;
}

