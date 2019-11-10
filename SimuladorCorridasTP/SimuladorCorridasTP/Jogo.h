#pragma once
#include "DGV.h"
#include "Autodromo.h"

using namespace std;

class Jogo {
	DGV* dgv;
	//vector <Autodromo> autodromos;

public:
	Jogo();

	string criaItensJogo(vector <string> vec);

	string eliminaCarro(vector <string> vec);

	string inserePilotoEmCarro(string car, string pil);

	string retiraPilotoDeCarro(string pil);

	string mostraPilotos() const;

};
