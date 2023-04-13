#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <string.h>



using namespace std;


//Cabeçalho da função:
void inverteString(char string[]);

//Função: Recebe como parametro a string e pega o tamanho desse vetor de caracteres e percorre em ordem decrescente
// mostrando as letras invertidas:

void inverteString(char string[]){
	int tamanho;
	tamanho = strlen(string);
	
	for(int i = tamanho - 1; i>=0; i-- ){
		cout << string[i];
	}
	
	
	
}
int main() {
	//Inserindo a string: 
	
	char nome[25];
	cout << "Digite algo: ";
	cin >> nome;
	inverteString(nome);
}
