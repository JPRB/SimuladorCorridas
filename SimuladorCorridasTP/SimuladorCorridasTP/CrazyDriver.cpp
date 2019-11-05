#include "CrazyDriver.h"
#include <random>


CrazyDriver::CrazyDriver(string name)
	:Piloto(name)
{
	default_random_engine val;
	uniform_int_distribution<int> aleatorio(1, 5);
	desatento = aleatorio(val);
	//desatento = rand() % 5 + 1;
}

CrazyDriver::~CrazyDriver(){}

void CrazyDriver::setDesatento() {
	
}

int CrazyDriver::getDesatento() const {
	return desatento;
}


