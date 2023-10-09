#ifndef BARAJA_H
#define BARAJA_H
#include "Carta.h"
#include <list>
#include <iostream>
#include <ctime>
using namespace std;

class Baraja {
private:
	list<Carta> cartas;
public:
	Baraja();
	void mezclar();
	Carta sacarCarta();
};




#endif // BARAJA_H
