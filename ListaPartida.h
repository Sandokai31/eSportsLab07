#ifndef LISTAPARTIDA_H
#define LISTAPARTIDA_H

//incluir NodoPartida
#include "NodoPartida.h"

class ListaPartida {
public:
	ListaPartida();
	//destructor
	~ListaPartidas();
	
	void insertar(Partida* partida);
	
private:
	NodoPartida* cabeza;
	int cantidad;
};

#endif
