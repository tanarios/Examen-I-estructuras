#ifndef JUEGO_H
#define JUEGO_H

#include "Baraja.h"
#include "Jugador.h"

class Juego {
private:
	Baraja baraja;
	Jugador crupier;
	Jugador* jugadores;
	int numJugadores;
	
public:
	Juego(int numJugadores, std::string nombres[], int saldos[]);
	~Juego();
	void repartirCartas();
	void jugar();
	Jugador& getCrupier();
	Jugador& getJugador(int index);
};

#endif // JUEGO_H
