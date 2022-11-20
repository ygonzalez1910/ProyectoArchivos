#ifndef NODOPROVEEDOR_H
#define NODOPROVEEDOR_H

#include "Proveedor.h"

class NodoProveedor {
public:
	NodoProveedor(Proveedor*,NodoProveedor*);
	~NodoProveedor();
	NodoProveedor* getSiguiente();
	Proveedor* getDato();
	
private:
	Proveedor* dato;
	NodoProveedor* siguiente;
	
};

#endif

