#include "Jogo.h"
#include "InteractModoUm.h"


using namespace std;

int main() {
	Jogo jog;

	InteractModoUm it(&jog);

	it.leituraComandos();
	
}