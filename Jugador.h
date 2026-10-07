#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
class Jugador {
public:
	Jugador();
	~Jugador();
	string getNickname();
	string getNombreCompleto();
	string getRol();
	void setNickname(string nickname);
	void setNombreCompleto(string nombreCompleto);
	void setRol(string rol);
	string toString();
private:
	string nickname;
	string nombreCompleto;
	string rol;
};

#endif

