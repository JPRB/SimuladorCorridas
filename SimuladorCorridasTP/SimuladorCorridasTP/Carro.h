#pragma once
#include "Piloto.h"
#include "CrazyDriver.h"
#include <string>

using namespace std;

class Carro {
	const string marca;
	string modelo;
	const char id;
	const int maxvelocidade;
	const double maxenergia;
	int velocidade;
	double energia;
	bool parado, emergencia;
	bool danificado;

public:

	Carro(string mar, char idd, double maxe, int maxv, string mod = "Modelo Base");

	char getID() const;

	void manivela(int val);

	void mudaEmergencia();

	void mudaEstado();

	void acelerador();

	void travao();



};
