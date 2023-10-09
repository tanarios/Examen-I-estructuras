#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
using namespace std;

class Jugador {
public:
	Jugador();
	Jugador(string nombre, int saldo);
	~Jugador();
	void setSaldo(int saldo);
	void setNombre(string nombre);
	int getSaldo();
	string getNombre();
	string toString();
	
	//metodos
	
	
private:
	string nombre;
	int saldo; //vease tambien como monedas
};

#endif

