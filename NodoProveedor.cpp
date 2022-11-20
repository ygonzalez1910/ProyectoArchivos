#include "NodoProveedor.h"

NodoProveedor::NodoProveedor(Proveedor* dato, NodoProveedor* siguiente)
	: dato(dato), siguiente(siguiente) {
	
}

NodoProveedor::~NodoProveedor() {
	
}

NodoProveedor* NodoProveedor::getSiguiente(){
	return siguiente;
}

Proveedor* NodoProveedor::getDato(){
	return dato;
}


