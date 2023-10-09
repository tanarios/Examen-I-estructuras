#include "Carta.h"

Carta::Carta(int valor, string palo) : valor(valor), palo(palo) {}

int Carta::getValor() {
	return valor;
}

std::string Carta::getPalo() {
	return palo;
}
