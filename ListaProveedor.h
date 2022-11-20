#ifndef LISTAPROVEEDOR_H
#define LISTAPROVEEDOR_H
#include "NodoProveedor.h"

class ListaProveedor {
public:
	ListaProveedor();
	~ListaProveedor();
	void agregarProveedor(Proveedor*);
	string toString();
	Proveedor* recuperarProveedor(string);
private:
	NodoProveedor* primero;
	NodoProveedor* actual;
};

#endif
