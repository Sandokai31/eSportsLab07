#include "Partida.h"
//falta equipo

//libreria
#include<iostream>

using namespace std;

Partida::Partida() { //inicializar en 0, const sin parametro
	codigo = "";
	mapa = "";
	duracionMinutos = 0;
	ganador = NULL;
}

Partida::Partida(string codigo, string mapa, int duracionMinutos, Equipo* ganador) { //const con parametro
	this->codigo = codigo;
	this->mapa = mapa;
	this->duracionMinutos = duracionMinutos;
	this->ganador = ganador;
}

 //sets
void Partida::setCodigo(string codigo) {
	this->codigo = codigo;
}

void Partida::setMapa(string mapa) {
	this->mapa = mapa;
}

void Partida::setDuracionMinutos(int duracionMinutos) {
	this->duracionMinutos = duracionMinutos;
}

void Partida::setGanador(Equipo* ganador) {
	this->ganador = ganador;
}
//gets
string Partida::getCodigo() {
	return codigo;
}

string Partida::getMapa() {
	return mapa;
}

int Partida::getDuracionMinutos() {
	return duracionMinutos;
}

Equipo* Partida::getGanador() {
	return ganador;
}
//mostrar mensaje de lo que paso 
void Partida::mostrarInfo() {
	cout << "Codigo: " << codigo << endl;
	cout << "Mapa: " << mapa << endl;
	cout << "Duracion: " << duracionMinutos << " minutos" << endl;
	if (ganador != NULL) {
		cout << "Equipo ganador: " << ganador->getNombre() << endl;
	} else {
		cout << "Equipo ganador: Sin definir" << endl;
	}
}

