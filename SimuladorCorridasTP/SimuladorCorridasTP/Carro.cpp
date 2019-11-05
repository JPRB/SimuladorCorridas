#include "Carro.h"

/*Carro::Carro(string mar, char idd, double maxe, int maxv, string mod="base")
	:marca(mar), modelo(mod), id(idd), maxenergia(maxe), maxvelocidade(maxv),
	emergencia(false), parado(true), danificado(false), velocidade(0), energia(0){}*/

// Construtor 
Carro::Carro(string mar, char idd, double maxe, int maxv, string mod)
	: marca(mar), modelo(mod), id(idd), maxenergia(maxe), maxvelocidade(maxv){}

// Destrutor
Carro::~Carro(){}

char Carro::getID() const {
	return id;
}

bool Carro::getDanificado() const {
	return danificado;
}

void Carro::setDanificado(bool estragado) {
	this->danificado = estragado;
}

void Carro::manivela(int val) {
	if ((energia + val) >= maxenergia)
		energia += val;
}

void Carro::setEmergencia() {
	//!emergencia;
	if (emergencia == false)
		emergencia = true;
	else
		emergencia = false;
}

void Carro::setEstado() {
	//!parado;
	if (parado == false)
		parado = true;
	else
		parado = false;
}

void Carro::acelerar(int velocidade) {
	this->velocidade = velocidade;
}

void Carro::travao() {

}

