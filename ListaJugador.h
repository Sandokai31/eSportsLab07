#ifndef LISTAJUGADOR_H
#define LISTAJUGADOR_H
#include "NodoJugador.h"
class ListaJugador {
public:
	ListaJugador();
	~ListaJugador();
	void insertar(Jugador* jugador);
	int getCantidad();
	string toString();
	void imprimirNicknames();
private:
	NodoJugador* cabeza;
	int cantidad;
};

#endif

