#include "Utils.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	vector<string> c; //vetor que guarda os comandos
	string com;

	cout << "Modo 1" << endl;
	cout << "Insira um comando: (help lista todos os comandos)" << endl;

	getline(cin, com);
	istringstream ler_com(com);

	for (unsigned int i = 0; i < com.size(); i++) { //separa as palavras por espaços e coloca-as num vetor
		string a;
		ler_com >> a;
		c.push_back(a);
	}

	comandosModo2(c);
}