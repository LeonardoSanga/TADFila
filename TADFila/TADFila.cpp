#include <iostream>

#include "TADFila.hpp"

const int primeiroElemento = -1;
const int ultimoElemento = TAMANHO_FILA - 1;

void cria(Fila& F) {

	Fila FilaVazia;
	FilaVazia.ultimo = primeiroElemento;
	F = FilaVazia;

}

bool cheia(Fila& F) {

	if (F.ultimo == ultimoElemento) {

		return true;

	}

	return false;
}

bool vazia(Fila& F) {

	if (F.ultimo == primeiroElemento) {

		return true;

	}

	return false;
}

void insere(Fila& F, char& elemento, bool& deuCerto) {

	if (cheia(F)) {

		deuCerto = false;

	}
	else {

		deuCerto = true;

		F.ultimo++;
		F.elementos[F.ultimo] = elemento;

	}

}

void retira(Fila& F, char& elemento, bool& deuCerto) {

	if (vazia(F)) {

		deuCerto = false;

	}
	else {

		deuCerto = true;

		elemento = F.elementos[0];

		for (int i = 1; i < TAMANHO_FILA; i++) {

			F.elementos[i - 1] = F.elementos[i];

		}

		F.ultimo--;

	}
}