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
	int getCantVendida();
	void setCantVendida(int);
	string toString();
	bool minimo();
	double pagar(int);
	
private:
	int cantidad;
	string nombre;
	int cantMinima;
	int cantVendida;
	Proveedor* proveedor;
	int precio;
	
};

#endif
