#include "Carta.h"

Carta::Carta() {
	
}

Carta::Carta(string valor, string palo){
    this->valor=valor;
    this->palo=palo;
}

Carta::~Carta() {
}

string Carta::get_Valor(){
    return valor;
}

void Carta::set_Valor(string valor){
    this->valor=valor;
}

string Carta::get_Palo(){
    return palo;
}

void Carta::set_Palo(string palo){
    this->palo=palo;
}



