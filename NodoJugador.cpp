#include "NodoJugador.h"

NodoJugador::NodoJugador(Jugador* dato) {
	this->dato=dato;
	this->sig=nullptr;
}

NodoJugador::~NodoJugador(){
	delete this->dato;
}

Jugador* NodoJugador::getDato(){
	return this->dato;
}
NodoJugador* NodoJugador::getSig(){
	return this->sig;
}
void NodoJugador::setDato(Jugador* dato){
	this->dato=dato;
}
void NodoJugador::setSig(NodoJugador* sig){
	this->sig=sig;
}

	
