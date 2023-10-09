#include "Jugador.h"

Jugador::Jugador() {
	nombre = "";
	saldo= 500; //el saldo inicial es de 500 monedas
}

Jugador::Jugador(string nombre, int saldo){
	this->nombre=nombre;
	this->saldo=saldo;
	
}
Jugador::~Jugador(){
	
}

string Jugador::getNombre(){
	return nombre;
}

void Jugador::setNombre(string nombre){
	this->nombre=nombre;
}

int Jugador::getSaldo(){
	return saldo;
}

void Jugador::setSaldo(int saldo){
	this->saldo=saldo;
}

