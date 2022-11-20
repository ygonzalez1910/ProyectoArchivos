#include "NodoRutas.h"

NodoRutas::NodoRutas(Rutas* dato, NodoRutas* siguiente)
	: dato(dato), siguiente(siguiente) {
	
}

NodoRutas::~NodoRutas() {
	
}

NodoRutas* NodoRutas::getSiguiente(){
	return siguiente;
}

Rutas* NodoRutas::getDato(){
	return dato;
}

