#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
using namespace std;

class Juego {
public:
	Juego();
	~Juego();
	void agregarJugador();//se agregan a una pila o cola cada jugador
	void repartirCartas();//se reparten 2 por jugador
	void mostrarCartas();//este metodo es para mostrar las cartas de cada jugador
	string ganador(); //aca van todas las reglas de quien gana y muestra al ganador
	void apostar(); 
	void pedirCarta();
	void plantarse();
	void doblar();

private:

};

#endif

