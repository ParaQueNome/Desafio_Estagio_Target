#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;



int main() {
	setlocale(LC_ALL,"Portuguese");
	// Declaração das variáveis:
	int termo, soma;
	int primeiro = 0;
	int segundo = 1;
	
	// Inserindo o valor que se deseja procurar na sequencia:
	cout << "Insira o valor a ser procurado na sequência de Fibonacci: ";
	cin >> termo;
	
	// Inicializando a verificação da sequência:
	while(termo > soma){
		soma = primeiro + segundo;
		primeiro = segundo;
		segundo = soma;
		// Realizando a comparação dos termos;
		if(termo == 0 || termo == 1){
			cout << "O termo faz parte da sequência de Fibonacci" << endl;
			cout << "Termo inserido: " << termo << endl;
			cout << "Termo da sequência: " << soma << endl;
			cout << "-----------------------------------------" << endl; 
		}else if(termo == soma){
			cout << "O termo faz parte da sequência de Fibonacci" << endl;
			cout << "Termo inserido: " << termo << endl;
			cout << "Termo da sequência: " << soma << endl;
			cout << "-----------------------------------------" << endl; 
			
		}else{
			cout << "Pesquisando ..." << endl;
			cout << "---------------" << endl;
			
		}
	}
	if(termo != soma){
		cout << "O termo não faz parte da sequência de Fibonacci" << endl;
		
	}
}
