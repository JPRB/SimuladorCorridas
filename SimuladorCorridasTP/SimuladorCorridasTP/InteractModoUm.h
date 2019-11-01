#pragma once

#include "Jogo.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;


class InteractModoUm{

	Jogo* j;

	vector<string> c; //vetor que guarda os comandos

	void opcoesModo1();

	void helpModo1() const;

public:

	InteractModoUm(Jogo* d);

	void leituraComandos();

};