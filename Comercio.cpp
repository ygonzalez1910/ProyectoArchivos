#include "Comercio.h"
#include <sstream>
using std::stringstream;

Comercio::Comercio()
	:choferes(new ListaChofer()),provedores(new ListaProveedor()),rutas(new ListaRutas()),materiasPrimas(new ListaMateriaPrima()){
	
}

Comercio::~Comercio() {
	
}

void Comercio::agregarChofer (Chofer * chofer) {
	choferes->agregarChofer(chofer);
}

string Comercio::listadoChoferes ( ) {
	return choferes->toString();
}

void Comercio::agregarProveedor (Proveedor * proveedor) {
	provedores->agregarProveedor(proveedor);
}

string Comercio::listadoProveedores ( ) {
	return provedores->toString();
}

void Comercio::agregarRutas(Rutas* ruta) {
	rutas->agregarRutas(ruta);
}

string Comercio::listadoRutas(){
	return rutas->toString();
}


void Comercio::RuPrede(){
	Rutas* ruta1 = new Rutas("Caldera");
	Rutas* ruta2 = new Rutas("Atenas");
	Rutas* ruta3 = new Rutas("Poas");
	
	agregarRutas(ruta1);
	agregarRutas(ruta2);
	agregarRutas(ruta3);
}

void Comercio::materiaProvePrede(){
	
	Proveedor* prove1 = new Proveedor("Gallito");
	Proveedor* prove2 = new Proveedor("DosPinos");
	
	MateriaPrima* mate1 = new MateriaPrima(13,"Morenitos",prove1,10);
	MateriaPrima* mate2 = new MateriaPrima(70,"Tapitas",prove1,300);
	MateriaPrima* mate3 = new MateriaPrima(20,"FrescoLeche",prove2,500);
	
	agregarProveedor(prove1);
	agregarProveedor(prove2);
	
	agregarMateriaPrima(mate1);
	agregarMateriaPrima(mate2);
	agregarMateriaPrima(mate3);
	
}

void Comercio::agregarMateriaPrima(MateriaPrima* materiaPrima) {
	materiasPrimas->agregarMateriaPrima(materiaPrima);
}

string Comercio::listadoMateriaPrima ( ) {
	return materiasPrimas->toString();
}

MateriaPrima* Comercio::recuperarMateria(string nombre){
	return materiasPrimas->recuperarMateriaPrima(nombre);
}

double Comercio::venta(string nombre, int cantVend){
	return materiasPrimas->pagar(nombre, cantVend);
}

Rutas* Comercio::recuperarRuta(string nombre){
	return rutas->recuperarRutas(nombre);
}


