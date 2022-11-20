#ifndef LISTAMATERIAPRIMA_H
#define LISTAMATERIAPRIMA_H
#include "NodoMateriaPrima.h"

class ListaMateriaPrima {
public:
	ListaMateriaPrima();
	~ListaMateriaPrima();
	void agregarMateriaPrima(MateriaPrima*);
	string toString();
	int getN();
	void iniciarActual();
	bool masElementos();
	MateriaPrima* recuperarMateriaPrima(string);
	double pagar(string,int);
	
private:
	NodoMateriaPrima* primero;
	NodoMateriaPrima* actual;
	int n;
};

#endif

