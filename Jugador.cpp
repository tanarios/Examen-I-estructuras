#include "Jugador.h"

Jugador::Jugador(std::string nombre, int saldo) : nombre(nombre), saldo(saldo) {}

void Jugador::agregarCarta(Carta carta) {
	mano.push(carta);
}

Carta Jugador::sacarCarta() {
	Carta carta = mano.top();
	mano.pop();
	return carta;
}

bool Jugador::tieneCartas() {
	return !mano.empty();
}

std::string Jugador::getNombre() {
	return nombre;
}

int Jugador::getSaldo() {
	return saldo;
}

