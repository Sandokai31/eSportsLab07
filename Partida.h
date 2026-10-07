#ifndef PARTIDA_H
#define PARTIDA_H

//libreria 
#include <string>

using namespace std;

//Falta el equipo 

class Partida {
public:
	Partida(); //const sin parametros
	Partida(string codigo, string mapa, int duracionMinutos, Equipo* ganador); //const con parametros
	
	//sets
	void setCodigo(string codigo);
	void setMapa(string mapa);
	void setDuracionMinutos(int duracionMinutos);
	void setGanador(Equipo* ganador);
	
	void mostrarInfo();
	
	//gets
	string getCodigo();
	string getMapa();
	int getDuracionMinutos();
	Equipo* getGanador();
	
	
private:
	string codigo;
	string mapa;
	int duracionMinutos;
	Equipo* ganador;
};

#endif
