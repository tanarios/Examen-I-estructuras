#include "Baraja.h"

Baraja::Baraja() : primera_carta(nullptr) {
	// (El código que inicializa la baraja)
	// Crear las 52 cartas y agregarlas a la baraja
	string valores[] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	string palos[] = {"Corazones", "Diamantes", "Treboles", "Picas"};
	
	for (int i = 0; i < 13; ++i) {
		for (int j = 0; j < 4; ++j) {
			Carta* nueva_carta = new Carta(valores[i], palos[j]);
			if (!primera_carta) {
				primera_carta = nueva_carta;
			} else {
				Carta* temp = primera_carta;
				while (temp->siguiente) {
					temp = temp->siguiente;
				}
				temp->siguiente = nueva_carta;
			}
		}
	}
}

void Baraja::mostrarBaraja() {
	Carta* temp = primera_carta;
	while (temp) {
		cout << temp->valor << " de " << temp->palo << endl;
		temp = temp->siguiente;
	}
}
