#ifndef NODORUTAS_H
#define NODORUTAS_H

#include "Rutas.h"

class NodoRutas {
public:
	NodoRutas(Rutas*,NodoRutas*);
	~NodoRutas();
	NodoRutas* getSiguiente();
	Rutas* getDato();
private:
	Rutas* dato;
	NodoRutas* siguiente;
};

#endif

