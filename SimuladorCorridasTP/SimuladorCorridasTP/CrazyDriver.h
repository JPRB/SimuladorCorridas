#pragma once
#include "Piloto.h"

using namespace std;

class CrazyDriver : public Piloto{
	int desatento; //1 a 5 seg - aleatorio


	CrazyDriver(string name);

};

