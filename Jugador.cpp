#include "Jugador.h"
Jugador::Jugador(){
	this->nickname = "";
	this->nombreCompleto = "";
	this->rol = "";
}

Jugador::~Jugador(){

}

string Jugador::getNickname(){
	return this->nickname;
}

string Jugador::getNombreCompleto(){
	return this->nombreCompleto;
}

string Jugador::getRol(){
	return this->rol;
}

void Jugador::setNickname(string nickname){
	this->nickname=nickname;
}

void Jugador::setNombreCompleto(string nombreCompleto){
	this->nombreCompleto=nombreCompleto;
}

void Jugador::setRol(string rol){
	if (rol=="Atacante"||rol=="Defensor"||rol=="Soporte"){
		this->rol=rol;
	}else{
		cout<<"Rol invalido. Debe ser Atacante, defensor o soporte..."<<endl;
	}
}

string Jugador::toString(){
	stringstream s;
	s<<this->nickname<<" - "<<this->nombreCompleto<<"("<<this->rol<<")";
	return s.str();
}
