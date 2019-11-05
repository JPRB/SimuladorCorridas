#include "Utils.h"



void comandosModo2(vector <string> c) {
	if (c[0] == "help")
		listaComandosModo2();
	else if (c[0] == "campeonato")
		cout << "carregaP d Aco";

	else if (c[0] == "listacarros")
		cout << "carregaP d Aco";
	else if (c[0] == "carregabat")
		cout << "carregaP d Aco";
	else if (c[0] == "carregatudo")
		cout << "carregaP d Aco";
	else if (c[0] == "corrida")
		cout << "carregaP d Aco";
	else if (c[0] == "acidente")
		cout << "carregaP d Aco";
	else if (c[0] == "stop")
		cout << "carregaP d Aco";
	else if (c[0] == "destroi")
		cout << "carregaP d Aco";
	else if (c[0] == "passatempo")
		cout << "carregaP d Aco";
	else if (c[0] == "log")
		cout << "carregaP d Aco";

}

void listaComandosModo2() {
	cout << "Estes sao os comandos que existem: " << endl;
	cout << "- campeonato <A1> <A2>...<An>" << endl;
	cout << "- listacarros" << endl;
	cout << "- carregabat <letraCarro> <Q>" << endl;
	cout << "- carregatudo" << endl;
	cout << "- corrida" << endl;
	cout << "- acidente <letraCarro>" << endl;
	cout << "- stop <nomePiloto>" << endl;
	cout << "- destroi <letraCarro>" << endl;
	cout << "- passatempo <n>" << endl;
	cout << "- log" << endl;
}