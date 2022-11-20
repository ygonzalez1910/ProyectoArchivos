#ifndef NODOMATERIAPRIMA_H
#define NODOMATERIAPRIMA_H

#include "MateriaPrima.h"

class NodoMateriaPrima {
public:
	NodoMateriaPrima(MateriaPrima*,NodoMateriaPrima*);
	~NodoMateriaPrima();
	
	NodoMateriaPrima* getSiguiente();
	MateriaPrima* getDato();
	
private:
	MateriaPrima* dato;
	NodoMateriaPrima* siguiente;
};

#endif
