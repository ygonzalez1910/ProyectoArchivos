#ifndef CHOFER_H
#define CHOFER_H
#include "Rutas.h"
#include <string>
using namespace std;

class Chofer {
public:
	Chofer(string,Rutas*);
	~Chofer();
	string getNombre();
	string toString();
	
private:
	string nombre;
	Rutas* ruta;
};

#endif
