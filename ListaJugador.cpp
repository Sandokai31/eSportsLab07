#include "ListaJugador.h"

ListaJugador::ListaJugador(){
	this->cabeza=nullptr;
	this->cantidad=0;
}

ListaJugador::~ListaJugador(){
	NodoJugador* actual=this->cabeza;
	while(actual!=nullptr){
		NodoJugador* sig=actual->getSig();
		delete actual; 
		actual=sig;
	}
	this->cabeza=nullptr;
	this->cantidad=0;
}
	
void ListaJugador::insertar(Jugador* jugador){
	NodoJugador* nuevo=new NodoJugador(jugador);
	if(this->cabeza==nullptr){
		this->cabeza=nuevo;
	}else{
		NodoJugador* actual=this->cabeza;
		while(actual->getSig()!=nullptr){
			actual=actual->getSig();
			}
			actual->setSig(nuevo);
		}
	this->cantidad++;
}
	
int ListaJugador::getCantidad(){
	return this->cantidad;
}
	
string ListaJugador::toString(){
	stringstream s;
	NodoJugador* actual=this->cabeza;
	while(actual!=nullptr){
		s<<actual->getDato()->toString()<<endl;
		actual=actual->getSig();
	}
	return s.str();
}
	
void ListaJugador::imprimirNicknames(){
	NodoJugador* actual=this->cabeza;
	while(actual!=nullptr){
		cout<<actual->getDato()->getNickname()<<endl;
		actual=actual->getSig();
	}
}
