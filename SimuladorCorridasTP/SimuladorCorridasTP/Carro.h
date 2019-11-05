#pragma once
#include <string>

using namespace std;

class Carro {
	const string marca;
	string modelo;
	const char id;
	const int maxvelocidade;
	const double maxenergia;
	int velocidade = 0;
	double energia = 0;
	bool parado = false, emergencia = false;
	bool danificado = false;

public:

	//Construtor
	Carro(string mar, char idd, double maxe, int maxv, string mod = "Base");

	//Destrutor da Class
	~Carro(){}

	char getID() const;

	bool getDanificado() const;

	void setDanificado(bool danificado);

	// Manivela de carregamento do carro (em mAh)
	void manivela(int valCarregamento);

	void setEmergencia();

	// Alterar Estado do Carro ( e vice-versa)
	//// Se ñ estiver parado, passa a estar
	void setEstado();

	void acelerar(int velo=1);

	void travao();



};
