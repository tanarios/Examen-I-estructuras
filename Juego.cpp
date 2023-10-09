#include "Juego.h"

Juego::Juego(int numJugadores, std::string nombres[], int saldos[]) : numJugadores(numJugadores) {
	// Validar el número de jugadores
	if (numJugadores < 1 || numJugadores > 3) {
		std::cerr << "Número de jugadores inválido. Debe ser 1, 2 o 3." << std::endl;
		exit(EXIT_FAILURE);
	}
	
	// Inicializar el arreglo de jugadores
	jugadores = new Jugador[numJugadores];
	
	// Asignar nombres y saldos a los jugadores
	for (int i = 0; i < numJugadores; i++) {
		jugadores[i] = Jugador(nombres[i], saldos[i]);
	}
}

Juego::~Juego() {
	delete[] jugadores;
}

void Juego::repartirCartas() {
	baraja.mezclar();
	for (int i = 0; i < numJugadores; i++) {
		for (int j = 0; j < 13; j++) {
			jugadores[i].agregarCarta(baraja.sacarCarta());
		}
	}
	for (int i = 0; i < 13; i++) {
		crupier.agregarCarta(baraja.sacarCarta());
	}
}

Jugador& Juego::getCrupier() {
	return crupier;
}

Jugador& Juego::getJugador(int index) {
	if (index < 0 || index >= numJugadores) {
		std::cerr << "Índice de jugador inválido." << std::endl;
		exit(EXIT_FAILURE);
	}
	return jugadores[index];
}
