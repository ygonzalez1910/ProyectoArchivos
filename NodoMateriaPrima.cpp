#include "NodoMateriaPrima.h"

NodoMateriaPrima::NodoMateriaPrima(MateriaPrima* dato, NodoMateriaPrima* siguiente)
	: dato(dato), siguiente(siguiente) {
	
}

NodoMateriaPrima::~NodoMateriaPrima() {
	
}

NodoMateriaPrima* NodoMateriaPrima::getSiguiente(){
	return siguiente;
}

MateriaPrima* NodoMateriaPrima::getDato(){
	return dato;
}


