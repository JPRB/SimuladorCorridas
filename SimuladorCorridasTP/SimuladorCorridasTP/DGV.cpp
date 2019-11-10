#include "DGV.h"
#include <sstream>

string DGV::insereCarro(vector <string> vec) {
	if (vec[2] != "" && vec[3] != "" && vec[4] != "") {
		carros.push_back(new Carro(vec[2], stod(vec[3]), stoi(vec[4]), vec[5]));
		return "Carro inserido com sucesso\n";
	}

	return "N�o foi poss�vel inserir carro, verifique os parametros\n";
}

string DGV::inserePiloto(string tipo, string nome) {
	Piloto* aux = Piloto::fabrica(tipo, nome);
	if (aux != nullptr) {
		pilotos.push_back(aux);
		return "Piloto inserido com sucesso\n";
	}

	return "N�o foi poss�vel inserir o piloto, tente novamente\n";
}

string DGV::eliminaCarro(string ident) {
	vector<Carro*>::iterator it;

	for (it = carros.begin(); it != carros.end();) {
		if ((*it)->getID() == ident.at(0)){
			delete* it;
			it = carros.erase(it);
			return "Carro eliminado com sucesso";
		}
		else
			it++;
	}

	return "Carro n�o encontrado, tente novamente";
}

string DGV::eliminaPiloto(string ident) {
	vector<Piloto*>::iterator it;

	for (it = pilotos.begin(); it != pilotos.end();) {
		if ((*it)->getNome() == ident){
			delete *it;
			it = pilotos.erase(it);
			return "Piloto eliminado com sucesso";
		}
		else
			it++;
	}

	return "Piloto n�o encontrado, tente novamente";
}

string DGV::inserePilotoEmCarro(string car, string pil) {
	vector<Piloto*>::iterator it;

	for (it = pilotos.begin(); it != pilotos.end(); it++) {
		if ((*it)->getNome() == pil) {	//procura o piloto
			if ((*it)->temCarroAtribuido() != true) {	//se encontrar, v� se j� tem um carro atribuido
				for (unsigned int i = 0; i < carros.size(); i++) {	//caso n�o tenha, percorre vetor carrod
					if (carros[i]->getID() == car.at(0)) {	//procura carro com o id
						(*it)->atribuiCarro(carros[i]);
						
						return "Carro atribuido a piloto com sucesso :)\n";
					}
				}
				return "Carro n�o encontrado, tente novamento!!!\n"; //n�o encontrou carro
			}
			else
				return "Piloto j� est� dentro de um carro!!!\n"; //piloto tem carro
		}
	}

		return "Piloto n�o encontrado, tente novamente!!!\n"; //piloto n�o encontrado

}

string DGV::retiraPilotoDeCarro(string pil) {
	vector <Piloto*>::iterator it;

	for (it = pilotos.begin(); it != pilotos.end(); it++) {
		if ((*it)->getNome() == pil) {
			(*it)->retiraCarro();
			return "Piloto Retirado do Carro";
		}
	}

	return "Piloto n�o encontrado";
}


string DGV::listaPilotos() const {
	ostringstream os;

	for (unsigned int i = 0; i < pilotos.size(); i++)
		os << "Nome: " << pilotos[i]->getNome() << " " << pilotos[i]->getIDCar() <<"\n";

	return os.str();
}

string DGV::listaCarros() const {
	ostringstream os;

	for (unsigned int i = 0; i < carros.size(); i++) //unsigned pois n�o s�o necess�rios inteiros negativos!!
		os << "Nome: " << carros[i]->getMarca() << " ID: " << carros[i]->getID() << "\n";

	return os.str();
}