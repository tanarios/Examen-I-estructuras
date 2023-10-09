#ifndef CARTA_H
#define CARTA_H
#include <iostream>
using namespace std;

class Carta {
private:
	int valor;
	string palo;
	
public:
	Carta(int valor, string palo);
	int getValor();
	string getPalo();
};


#endif // CARTA_H
