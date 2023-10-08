#ifndef CARTA_H
#define CARTA_H

class Carta {
public:
	Carta();
	Carta(string valor);
	string get_Valor();
	void set_Valor(string valor);
	string get_Palo();
	void set_Palo(string palo);
	
	~Carta();

//cada carta tiene un valor, que puede ser 1,2,3,4,5,6,7,8,9,10,J,Q,K y un palo que puede ser Corazones, Diamantes, Picas y Treboles
private:
 string valor;
 string palo;

};

#endif

