#include <iostream>

using namespace std;

#include "TADFila.hpp"
#include "TADFilaCircular.hpp"
#include "operacoesNaoPrimitivas.hpp"

int main() {

	// Cabeçalho
	cout << "*******************" << endl;
	cout << "* Teste TAD Fila! *" << endl;
	cout << "*******************\n" << endl;

	// Teste da TAD Fila básica

	// Teste F1

	Fila F1;
	cria(F1);

	bool deuCerto;

	char elemento;
	char elemento1 = 'A';
	char elemento2 = 'B';
	char elemento3 = 'C';
	char elemento4 = 'D';
	char elemento5 = 'E';
	char elemento6 = 'F';

	cout << "Criando a Fila 1: Inserindo os elementos A, B, C, D e E nessa oredem\n";
	insere(F1, elemento1, deuCerto);
	insere(F1, elemento2, deuCerto);
	insere(F1, elemento3, deuCerto);
	insere(F1, elemento4, deuCerto);
	insere(F1, elemento5, deuCerto);

	cout << "Fila 1: ";
	imprimeElementos(F1);

	cout << "\n\nTentatia de inserir o elemento 'F' a fila";
	insere(F1, elemento6, deuCerto);

	if (deuCerto == false) {

		cout << "\nA fila ja esta cheia! (Tamanho da fila = 5)" << endl; 

	}

	// Teste F2

	Fila F2;
	cria(F2);

	cout << "\nCriando a Fila 2: Inserindo os elementos A e B nessa oredem";
	insere(F2, elemento1, deuCerto);
	insere(F2, elemento2, deuCerto);

	cout << "\nFila 2: ";
	imprimeElementos(F2);

	cout << "\n\nRetirada do primeiro elemento da fila" << endl;
	retira(F2, elemento, deuCerto);

	cout << "Fila 2: ";
	imprimeElementos(F2);

	cout << "\n\nRetirada do segundo elemento da fila" << endl;
	retira(F2, elemento, deuCerto);

	cout << "Fila 2: ";
	imprimeElementos(F2);

	cout << "\n\nTentatia de retirar um terceiro elementos da fila";
	retira(F2, elemento, deuCerto);

	if (deuCerto == false) {

		cout << "\nA fila ja esta vazia!\n" << endl;

	}

	// Operações não primitivas

	cout << "Compara numero de elemento das Filas:\n";
	if (comparaNumeroDeElementos(F1, F2)) {

		cout << "As Filas 1 e 2 possuem o mesmo numero de elementos" << endl;

	}
	else {

		cout << "As Filas 1 e 2 nao possuem o mesmo numero de elementos" << endl;

	}

	// Teste F3

	Fila F3;
	cria(F3);

	insere(F3, elemento1, deuCerto);
	insere(F3, elemento2, deuCerto);
	insere(F3, elemento3, deuCerto);
	insere(F3, elemento4, deuCerto);
	insere(F3, elemento5, deuCerto);

	cout << "\nFila 3: ";
	imprimeElementos(F3);

	cout << "\n\nCompara Filas:";

	cout << "\nAs Filas 1 e 3 ";
	if (comparaFilas(F1, F3)) {

		cout << "sao iguais" << endl;

	}
	else {

		cout << "nao sao iguais" << endl;

	}

	cout << "As Filas 2 e 3 ";
	if (comparaFilas(F3, F2)) {

		cout <<  "sao iguais" << endl;

	}
	else {

		cout << "nao sao iguais" << endl;

	}

	// Cabeçalho
	cout << "\n****************************" << endl;
	cout << "* Teste TAD Fila Circular! *" << endl;
	cout << "****************************\n" << endl;

	// Teste da TAD Fila Circular

	// Teste F4

	FilaCircular F4;
	cria(F4);

	insere(F4, elemento1, deuCerto);
	insere(F4, elemento2, deuCerto);
	insere(F4, elemento3, deuCerto);
	insere(F4, elemento4, deuCerto);
	insere(F4, elemento5, deuCerto);

	cout << "Fila Circular: ";
	for (int i = 0; i < 5; i++) {

		cout << F4.elementos[i] << " ";

	}

	retira(F4, elemento, deuCerto);
	retira(F4, elemento, deuCerto);
	retira(F4, elemento, deuCerto);

	cout << "\nFila Circular apos retirar tres elementos: ";
	for (int i = 0; i < 5; i++) {

		cout << F4.elementos[i] << " ";

	}

	insere(F4, elemento1, deuCerto);
	insere(F4, elemento2, deuCerto);

	cout << "\nFila Circular apos inserir os elementos A e B nessa ordem: ";
	for (int i = 0; i < 5; i++) {

		cout << F4.elementos[i] << " ";

	}
	cout << endl;

	return 0;

}