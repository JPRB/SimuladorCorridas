#pragma once
#include "Carro.h"
#include <string>

using namespace std;

class Piloto {
	const string nome; //unico, a classe altera caso ja exista
	Carro* c;

public:

	Piloto(string name);
};