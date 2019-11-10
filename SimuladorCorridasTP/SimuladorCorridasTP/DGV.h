#pragma once
#include "Carro.h"
#include "Piloto.h"
#include <vector>

using namespace std;

class DGV {
	vector <Carro*> carros;
	vector <Piloto*> pilotos;

public:

	string insereCarro(vector <string> vec);

	string inserePiloto(string tipo, string nome);

	string eliminaCarro(string ident);

	string eliminaPiloto(string ident);

	string inserePilotoEmCarro(string car, string pil);

	string retiraPilotoDeCarro(string pil);

	string listaPilotos() const;

	string listaCarros() const;

};