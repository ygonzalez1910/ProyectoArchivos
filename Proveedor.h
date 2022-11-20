#ifndef PROVEEDOR_H
#define PROVEEDOR_H

#include <string>
using namespace std;

class Proveedor {
public:
	Proveedor(string);
	~Proveedor();
	string getNombre();
	string toString();
	
private:
	string nombre;
};

#endif
