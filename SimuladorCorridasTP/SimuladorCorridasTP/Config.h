#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Config {

	vector<string> c; //vetor que guarda os comandos

	void opcoesModo1();

	void helpModo1() const;

public:

	void leituraComandos();

};