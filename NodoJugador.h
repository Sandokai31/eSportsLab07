#ifndef NODOJUGADOR_H
#define NODOJUGADOR_H
#include "Jugador.h"
class NodoJugador {
public:
	NodoJugador(Jugador* dato);
	~NodoJugador();
	Jugador* getDato();
	NodoJugador* getSig();
	void setDato(Jugador* dato);
	void setSig(NodoJugador* sig);

private:
	Jugador* dato;
	NodoJugador* sig;
};

#endif

