#include "Carro.h"

int Carro::idcar = 'a';

Carro::Carro(string mar, double maxe, int maxv, string mod)
	:marca(mar), modelo(mod), id(idcar++), maxenergia(maxe), maxvelocidade(maxv),
	emergencia(false), parado(true), danificado(false), velocidade(0), energia(maxe){}

char Carro::getID() const {
	return id;
}

string Carro::getMarca() const {
	return marca;
}

string Carro::getAsString() const {
	ostringstream oss;
	oss << "Marca: " << marca << " Modelo: " << modelo << " Vel. Maxima: " << maxvelocidade << " Max. Energia: " << maxenergia;
	oss << "\nDanificado: " << danificado << "Energia: " << energia << "\n";
	return oss.str();
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

