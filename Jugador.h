#ifndef JUGADOR_H
#define JUGADOR_H

#include "Carta.h"
#include <stack>
#include <string>

class Jugador {
private:
	std::stack<Carta> mano;
	std::string nombre;
	int saldo;
	
public:
	Jugador(std::string nombre, int saldo);
	void agregarCarta(Carta carta);
	Carta sacarCarta();
	bool tieneCartas();
	std::string getNombre();
	int getSaldo();
};

#endif // JUGADOR_H

