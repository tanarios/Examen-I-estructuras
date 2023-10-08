#include "Jugador.h"

Jugador::Jugador() {
	nombre = "";
	saldo= 0;
}

Jugador::Jugador(string nombre, int saldo){
	this->nombre=nombre;
	this->saldo=saldo;
	
}
Jugador::~Jugador(){
	
}

string Jugador
