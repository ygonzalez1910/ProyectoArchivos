#ifndef MATERIAPRIMA_H
#define MATERIAPRIMA_H
#include "Proveedor.h"
#include <iostream>
using namespace std;

class MateriaPrima {
public:
	MateriaPrima(int,string,Proveedor*,int);
	~MateriaPrima();
	int getCantidad();
	int getPrecio();
	string getNombre();
	string toString();
	bool minimo();
	double pagar(int);
	
private:
	int cantidad;
	string nombre;
	int cantMinima;
	Proveedor* proveedor;
	int precio;
	
};

#endif
