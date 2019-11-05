#pragma once
#include "Carro.h"
#include <string>
#include <vector>

using namespace std;

static vector <string> usados; //nomes usados

class Piloto {
	static char num;
	const string nome; //unico, a classe altera caso ja exista
	Carro *car;

public:

	Piloto(string name);

	void acelera();

	void trava();

	string getNome() const {
		return nome;
	}

	static Piloto* fabrica(string tipo, string nome);

};