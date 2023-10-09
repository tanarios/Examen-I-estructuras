#include "Baraja.h"
#include <random>

Baraja::Baraja() {
	// Inicializar la baraja con las 52 cartas
	string palos[] = {"Treboles", "Corazones", "Diamantes", "Picas"};
	for (string palo : palos) {
		for (int valor = 1; valor <= 13; valor++) {
			cartas.push_back(Carta(valor, palo));
		}
	}
}

void Baraja::mezclar() {
	srand(time(0)); // Semilla para generar números aleatorios
	int size = cartas.size();
	
	for (int i = 0; i < size; i++) {
		int random_pos = rand() % size;
		auto it1 = next(cartas.begin(), i);
		auto it2 = next(cartas.begin(), random_pos);
		
		swap(*it1, *it2);
	}
}

Carta Baraja::sacarCarta() {
	Carta carta = cartas.front();
	cartas.pop_front();
	return carta;
}

