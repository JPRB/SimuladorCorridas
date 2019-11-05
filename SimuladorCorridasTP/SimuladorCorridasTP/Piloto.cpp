#include "Piloto.h"
#include "CrazyDriver.h"
#include "FastDriver.h"
#include "SurpriseDriver.h"
#include <iostream>

char Piloto::num = 'a';

Piloto::Piloto(string name)
	:nome(name){
		car = nullptr;
	}

void Piloto::acelera() {
	if (car != nullptr)
		car->acelerador();
}

void Piloto::trava() {
	if (car != nullptr)
		car->travao();
}

Piloto* Piloto::fabrica(string tipo, string nome) {
	string n = nome;
	/*for(int i = 0; i < usados.size(); i++)
		if (usados[i] == n) {
			cout << usados[i] << endl;
			n += 'c' + num; //ver isto!!!
			num++;
		}*/
	if (tipo == "C") {
		usados.push_back(n);
		return new CrazyDriver(n);
	}
	else if (tipo == "F") {
		//usados.push_back(nome);
		return new FastDriver(nome);
	}
	else if (tipo == "S") {
		//usados.push_back(nome);
		//return new SurpriseDriver();
		return nullptr;
	}
	else
		return nullptr;
}


