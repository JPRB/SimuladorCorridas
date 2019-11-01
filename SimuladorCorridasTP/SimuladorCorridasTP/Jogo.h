#pragma once
#include "DGV.h"
#include "Autodromo.h"

using namespace std;

class Jogo {
	DGV* dgv;
	//vector <Autodromo> autodromos;

public:
	Jogo();

	int criaItensJogo(vector <string> vec);

	string mostraPilotos() const;

};
