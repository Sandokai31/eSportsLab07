#include "ListaPartida.h"
//libreria
#include <iostream>

using namespace std;

//inicializar en 0
ListaPartidas::ListaPartidas() {
	cabeza = NULL;
	cantidad = 0;
}

//destructor
ListaPartidas::~ListaPartidas() {
	NodoPartida* actual = cabeza;
	NodoPartida* siguiente;

	
	while (actual != NULL) {
		siguiente = actual->getSiguiente();
		delete actual->getDato();
		delete actual;
		actual = siguiente;
	}
	
	cabeza = NULL;
	cantidad = 0;
	cout << "Lista de partidas eliminada" << endl;
}

void ListaPartidas::insertar(Partida* partida) {
	NodoPartida* nuevo = new NodoPartida(partida);
	
	if (cabeza == NULL) {
		cabeza = nuevo;
	} else {
		NodoPartida* actual = cabeza;
		while (actual->getSiguiente() != NULL) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(nuevo);
	}
	
	cantidad++;
}
