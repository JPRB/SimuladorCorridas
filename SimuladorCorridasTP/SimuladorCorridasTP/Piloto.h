#pragma once
#include "Carro.h"
#include <string>

using namespace std;

class Piloto {
	const string nome; //unico, a classe altera caso ja exista
	Carro *car;

public:
	Piloto(string name);

	void acelera();

	void trava();

	Piloto* fabrica(char tipo, string nome);

};