#include "Piloto.h"
#include "CrazyDriver.h"
#include "FastDriver.h"
#include "SurpriseDriver.h"


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
	if (tipo == "C")
		return new CrazyDriver(nome);
	else if (tipo == "F")
		return new FastDriver(nome);
	else if (tipo == "S")
		//return new SurpriseDriver();
		return nullptr;
	else
		return nullptr;
}


