#include "Config.h"
#include "Piloto.h"

Config::Config(DGV* d) {
	dgv = d;
}

void Config::leituraComandos() {

	while (1){
		c.clear();	//limpa o vetor que recebe os comandos
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

	
		opcoesModo1();
	}
}

void Config::opcoesModo1() {
	if (c[0] == "help")
		helpModo1();

	else if (c[0] == "carregaP")
		cout << "carregaP d Aco";

	else if (c[0] == "carregaA")
		cout << "carregaP d Aco";

	else if (c[0] == "cria") { //talvez chamar função que faça isto...
		if (c[1] == "p") {
			Piloto* aux = Piloto::fabrica(c[2], c[3]);
			if (aux != nullptr)
				dgv->inserePiloto(aux);
			else
				cout << "Piloto não inserido" << endl;
		}
		else if (c[1] == "c") {
			Carro* aux = new Carro("Mazda", 'a', 2500, 150, "M5");
			dgv->insereCarro(aux);
		}
	}

	else if (c[0] == "apaga")
			cout << "carregaP d Aco";
	else if (c[0] == "entranocarro")
			cout << "carregaP d Aco";
	else if (c[0] == "lista")
		cout << dgv->listaCarros();
		//cout << "carregaP d Aco";
	else if (c[0] == "savedgv")
		cout << "carregaP d Aco";
	else if (c[0] == "loaddgv")
		cout << "carregaP d Aco";
	else if (c[0] == "deldgv")
		cout << "carregaP d Aco";
}

void Config::helpModo1() const {
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