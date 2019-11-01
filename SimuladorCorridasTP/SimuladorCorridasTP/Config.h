#pragma once
#include "DGV.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;


class Config {

	DGV *dgv;

	vector<string> c; //vetor que guarda os comandos

	void opcoesModo1();

	void helpModo1() const;

public:

	Config(DGV* d);

	void leituraComandos();

};