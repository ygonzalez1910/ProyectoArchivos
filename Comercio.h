#ifndef COMERCIO_H
#define COMERCIO_H
#include "ListaChofer.h"
#include "ListaProveedor.h"
#include "ListaRutas.h"
#include "ListaMateriaPrima.h"
#include <string>
using namespace std;

class Comercio {
public:
	Comercio();
	~Comercio();
	
	void agregarChofer(Chofer*);
	string listadoChoferes();
	
	void agregarProveedor(Proveedor*);
	string listadoProveedores();
	void materiaProvePrede();
	
	void agregarRutas(Rutas*);
	string listadoRutas();
	void RuPrede();
	Rutas* recuperarRuta(string);
	
	void agregarMateriaPrima(MateriaPrima*);
	string listadoMateriaPrima();
	MateriaPrima* recuperarMateria(string);
	double venta(string,int);
	
private:
	ListaChofer* choferes;
	ListaProveedor* provedores;
	ListaRutas* rutas;
	ListaMateriaPrima* materiasPrimas;
};

#endif
