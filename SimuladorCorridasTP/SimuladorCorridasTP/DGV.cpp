#include "DGV.h"
#include <sstream>

using namespace std;

void DGV::insereCarro(Carro *aux) {
	carros.push_back(aux);
}

void DGV::inserePiloto(Piloto *aux) {
	pilotos.push_back(aux);
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
		os << "Nome: " << carros[i]->getID() << "\n";

	return os.str();
}