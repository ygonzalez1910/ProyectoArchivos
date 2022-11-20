#include <sstream>
using std::stringstream;

#include "ListaProveedor.h"

ListaProveedor::ListaProveedor():primero(nullptr), actual(nullptr) {
	
}

ListaProveedor::~ListaProveedor() {
	
}

void ListaProveedor::agregarProveedor(Proveedor* dato){
	primero = new NodoProveedor(dato,primero);
}

string ListaProveedor::toString(){
	stringstream r;
	Proveedor* proveedor;
	actual = primero;
	while(actual != nullptr){
		proveedor = actual->getDato();
		r << proveedor->toString();
		actual = actual->getSiguiente();
	}
	return r.str();
}

Proveedor* ListaProveedor::recuperarProveedor(string nombreProveedor){
	Proveedor* proveedor;
	actual = primero;
	while(actual != nullptr){
		proveedor = actual->getDato();
		if(proveedor != nullptr && proveedor->getNombre()== nombreProveedor){
			return proveedor;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
