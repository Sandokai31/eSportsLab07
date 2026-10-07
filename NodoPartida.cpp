#include "NodoPartida.h"
#include <iostream>
using namespace std;

NodoPartida::NodoPartida() {
	
}

NodoPartida::NodoPartida(Partida* dato) {
	this->dato = dato;
	siguiente = NULL;
}

//sets
void NodoPartida::setDato(Partida* dato) {
	this->dato = dato;
}

void NodoPartida::setSiguiente(NodoPartida* siguiente) {
	this->siguiente = siguiente;
}

//gets
Partida* NodoPartida::getDato() {
	return dato;
}

NodoPartida* NodoPartida::getSiguiente() {
	return siguiente;
}

