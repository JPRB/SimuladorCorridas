#include "Config.h"
#include "DGV.h"

using namespace std;

int main() {
	DGV diretorio;
	Config cfg(&diretorio);

	cfg.leituraComandos();

	
}