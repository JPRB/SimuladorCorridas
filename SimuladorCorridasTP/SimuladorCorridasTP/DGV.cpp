#include "DGV.h"
#include <sstream>

void DGV::insereCarro(Carro *aux) {
	carros.push_back(aux);
}

void DGV::inserePiloto(Piloto *aux) {
	pilotos.push_back(aux);
}

void DGV::eliminaCarro(string ident) {
	vector<Carro*>::iterator it;

	for (it = carros.begin(); it != carros.end();) {
		if ((*it)->getID() == ident.at(0)){
			delete* it;
			it = carros.erase(it);
		}
		else
			it++;
	}
}

void DGV::eliminaPiloto(string ident) {
	vector<Piloto*>::iterator it;

	for (it = pilotos.begin(); it != pilotos.end();) {
		if ((*it)->getNome() == ident){
			delete *it;
			it = pilotos.erase(it);
		}
		else
			it++;
	}
}


string DGV::listaPilotos() const {
	ostringstream os;

	for (int i = 0; i < pilotos.size(); i++)
		os << "Nome: " << pilotos[i]->getNome() << "\n";

	return os.str();
}

string DGV::listaCarros() const {
	ostringstream os;

	for (int i = 0; i < carros.size(); i++)
		os << "Nome: " << carros[i]->getMarca() << " ID: " << carros[i]->getID() << "\n";

	return os.str();
}