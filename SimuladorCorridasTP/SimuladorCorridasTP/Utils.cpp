#include "Utils.h"

void comandosModo1(vector <string> c) {
	if (c[0] == "help")
		listaComandosModo1();

	else if (c[0] == "carregaP")
		cout << "carregaP d Aco";

	else if (c[0] == "carregaA")
		cout << "carregaP d Aco";
	else if (c[0] == "cria")
		cout << "carregaP d Aco";
	else if (c[0] == "apaga")
		cout << "carregaP d Aco";
	else if (c[0] == "entranocarro")
		cout << "carregaP d Aco";
	else if (c[0] == "lista")
		cout << "carregaP d Aco";
	else if (c[0] == "savedgv")
		cout << "carregaP d Aco";
	else if (c[0] == "loaddgv")
		cout << "carregaP d Aco";
	else if (c[0] == "deldgv")
		cout << "carregaP d Aco";
}

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

void listaComandosModo1() {
	cout << "Estes sao os comandos que existem: " << endl;
	cout << "- carregaP <nomeficheiro>" << endl;
	cout << "- carregaC <nomeficheiro>" << endl;
	cout << "- carregaA <nomeficheiro>" << endl;
	cout << "- cria <letraTipo> <dados do objeto>" << endl;
	cout << "- apaga <letraTipo> identificador" << endl;
	cout << "- entranocarro <letraCarro> <nomePiloto>" << endl;
	cout << "- saidocarro <letraCarro>" << endl;
	cout << "- lista" << endl;
	cout << "- savedgv <nome>" << endl;
	cout << "- loaddgv <nome>" << endl;
	cout << "- deldgv <nome>" << endl;
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