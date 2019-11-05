#include "Carro.h"

int Carro::idcar = 'a';

Carro::Carro(string mar, double maxe, int maxv, string mod)
	:marca(mar), modelo(mod), id(idcar++), maxenergia(maxe), maxvelocidade(maxv),
	emergencia(false), parado(true), danificado(false), velocidade(0), energia(0){}

char Carro::getID() const {
	return id;
}

string Carro::getMarca() const {
	return marca;
}

void Carro::manivela(int val) {
	if ((energia + val) >= maxenergia)
		energia += val;
}

void Carro::mudaEmergencia() {
	//!emergencia;
	if (emergencia == false)
		emergencia = true;
	else
		emergencia = false;
}

void Carro::mudaEstado() {
	//!parado;
	if (parado == false)
		parado = true;
	else
		parado = false;
}

void Carro::acelerador() {

}

void Carro::travao() {

}

