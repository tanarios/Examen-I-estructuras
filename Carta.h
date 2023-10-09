#ifndef CARTA_H
#define CARTA_H
#include <iostream>
#include <string>
using namespace std;

class Carta{
public:
	string valor;
	string palo;
	Carta* siguiente;
	Carta(string v, string p);

//cada carta tiene un valor, que puede ser 1,2,3,4,5,6,7,8,9,10,J,Q,K y un palo que puede ser Corazones, Diamantes, Picas y Treboles
private:

};

#endif

