#include "Jogo.h"
#include <iostream>

Jogo::Jogo() {
	dgv = new DGV();
}

int Jogo::criaItensJogo(vector <string> vec) {
	if (vec[1] == "p") {
		Piloto* aux = Piloto::fabrica(vec[2], vec[3]);
		if (aux != nullptr)
			dgv->inserePiloto(aux);
		else
			return 1;
	}
	else if (vec[1] == "c") {
		Carro* aux = new Carro("Mazda", 'a', 2500, 150, "M5");
		dgv->insereCarro(aux);
		return 0;
	}
}

string Jogo::mostraPilotos() const {
	return dgv->listaPilotos();
}
