#pragma once
#include <string>

using namespace std;

class Carro {
	static int idcar;
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

	Carro(string mar, double maxe, int maxv, string mod = "Modelo Base");

	char getID() const;

	string getMarca() const;

	void manivela(int val);

	void mudaEmergencia();

	void mudaEstado();

	void acelerador();

	void travao();

	~Carro(){}

};
