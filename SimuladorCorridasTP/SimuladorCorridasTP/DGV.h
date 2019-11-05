#pragma once
#include "Carro.h"
#include "Piloto.h"
#include <vector>

using namespace std;

class DGV {
	vector <Carro*> carros;
	vector <Piloto*> pilotos;

public:

	void insereCarro(Carro* aux);

	void inserePiloto(Piloto* aux);

	string listaPilotos() const;

	string listaCarros() const;

};