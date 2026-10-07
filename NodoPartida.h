#ifndef NODOPARTIDA_H
#define NODOPARTIDA_H

//Partida
#include "Partida.h"

class NodoPartida {
public:
	NodoPartida();
	NodoPartida(Partida* dato);
	
	//sets
	void setDato(Partida* dato);
	void setSiguiente(NodoPartida* siguiente);
	
	//gets
	Partida* getDato();
	NodoPartida* getSiguiente();
private:
	Partida* dato;
	NodoPartida* siguiente;
};

#endif

