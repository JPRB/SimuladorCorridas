#include "Jogo.h"
#include <iostream>

Jogo::Jogo() {
	dgv = new DGV();
}

int Jogo::criaItensJogo(vector <string> vec) {
	if (vec[1] == "p") {
		//if (dgv->procuraNomePiloto(vec[3]) == false) {
		Piloto* aux = Piloto::fabrica(vec[2], vec[3]);
		if (aux != nullptr)
			dgv->inserePiloto(aux);
		else
			return 1;
		//}
	}
	else if (vec[1] == "c") {
		if (vec[2] != "" && vec[3] != "" && vec[4] != "") {
			Carro* aux = new Carro(vec[2], stod(vec[3]), stoi(vec[4]), vec[5]);
			dgv->insereCarro(aux);
			return 0;
		}
		else
			return 2;
	}
	else
		return 5;
}

void Jogo::eliminaCarro(string ident) {
	dgv->eliminaPiloto(ident);
}

string Jogo::mostraPilotos() const {
	return dgv->listaPilotos();
}
