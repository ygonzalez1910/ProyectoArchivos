#ifndef LISTACHOFER_H
#define LISTACHOFER_H

#include "NodoChofer.h"

class ListaChofer {
public:
	ListaChofer();
	~ListaChofer();
	void agregarChofer(Chofer*);
	string toString();
	Chofer* recuperarChofer(string);
private:
	NodoChofer* primero;
	NodoChofer* actual;
};

#endif


