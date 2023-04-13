#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;




int main() {
	setlocale(LC_ALL,"Portuguese");
	// Declarando as variáveis:
	float SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, outros = 19849.53,total;
	total = SP + RJ + MG + ES + outros;
	cout << "\t\tCálculo da representação percentual de cada estado na empresa." << endl;
	cout << "\t\t ---------------------------------------------------------" << endl;
	
	cout << "\t\tValor total correspondente a 100%: " << total << endl;
	cout << "\t\t ---------------------------------------------------------" << endl;
	cout << "\t\tPercentual correspondente ao estado de São Paulo: " << (SP/total) * 100 <<"% " << endl;
	cout << "\t\t ---------------------------------------------------------" << endl;
	cout << "\t\tPercentual correspondente ao estado do Rio de Janeiro: " << (RJ/total) * 100 <<"% " << endl;
	cout << "\t\t ---------------------------------------------------------" << endl;
	cout << "\t\tPercentual correspondente ao estado de Minas Gerais: " << (MG/total) * 100 <<"% " << endl;
	cout << "\t\t ---------------------------------------------------------" << endl;
	cout << "\t\tPercentual correspondente ao estado do Espiríto Santo: " << (ES/total) * 100 <<"% " << endl;
	cout << "\t\t ---------------------------------------------------------" << endl;
	cout << "\t\tPercentual correspondente a outros estados: " << (outros/total) * 100 <<"% " << endl;
	cout << "\t\t ---------------------------------------------------------" << endl;
}
