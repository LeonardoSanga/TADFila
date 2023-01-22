#include <iostream>

#include "operacoesNaoPrimitivas.hpp"
#include "TADFila.hpp"

void imprimeElementos(Fila& F) {

	char elemento;
	bool deuCerto;

	Fila Faux;
	cria(Faux);

	while (!vazia(F)) {

		retira(F, elemento, deuCerto);
		insere(Faux, elemento, deuCerto);

		std::cout << elemento << " ";

	}

	while (!vazia(Faux)) {

		retira(Faux, elemento, deuCerto);
		insere(F, elemento, deuCerto);

	}

}

int retornaNumeroDeElementos(Fila& F) {

	char elemento;
	bool deuCerto;

	Fila Faux;
	cria(Faux);

	int numeroDeElementos = 0;

	while (!vazia(F)) {

		retira(F, elemento, deuCerto);
		insere(Faux, elemento, deuCerto);

		numeroDeElementos++;

	}

	while (!vazia(Faux)) {

		retira(Faux, elemento, deuCerto);
		insere(F, elemento, deuCerto);

	}

	return numeroDeElementos;
}

bool comparaNumeroDeElementos(Fila& F1, Fila& F2) {

	if (retornaNumeroDeElementos(F1) == retornaNumeroDeElementos(F2)) {

		return true;

	}

	return false;
}

bool comparaFilas(Fila& F1, Fila& F2) {

	char elemento;
	bool deuCerto;

	Fila F1aux;
	Fila F2aux;

	cria(F1aux);
	cria(F2aux);

	char elementoFila1, elementoFila2;
	bool iguais = true;
	int numElementosIguais = 0;

	while (!vazia(F1) && !vazia(F2)) {

		retira(F1, elementoFila1, deuCerto);
		insere(F1aux, elementoFila1, deuCerto);

		retira(F2, elementoFila2, deuCerto);
		insere(F2aux, elementoFila2, deuCerto);

		if (elementoFila1 == elementoFila2) {

			numElementosIguais++;

		}

	}

	while (!vazia(F1aux) && !vazia(F2aux)) {

		retira(F1aux, elementoFila1, deuCerto);
		insere(F1, elementoFila1, deuCerto);

		retira(F2aux, elementoFila2, deuCerto);
		insere(F2, elementoFila2, deuCerto);

	}

	if (numElementosIguais == F1.ultimo + 1) {

		return true;

	}

	return false;
}
