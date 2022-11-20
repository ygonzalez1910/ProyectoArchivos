#ifndef NODOCHOFER_H
#define NODOCHOFER_H

#include "Chofer.h"

class NodoChofer {
public:
	NodoChofer(Chofer*,NodoChofer*);
	~NodoChofer();
	NodoChofer* getSiguiente();
	Chofer* getDato();
private:
	Chofer* dato;
	NodoChofer* siguiente;
};

#endif
