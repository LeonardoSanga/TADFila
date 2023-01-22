#include <iostream>

#include "TADFilaCircular.hpp"

void cria(FilaCircular& F) {

	FilaCircular FilaVazia;
	FilaVazia.primeiro = 0;
	FilaVazia.final = 0;
	FilaVazia.numElementos = 0;
	F = FilaVazia;

}

bool vazia(FilaCircular& F) {

	if (F.numElementos == 0) {

		return true;

	}

	return false;
}

bool cheia(FilaCircular& F) {

	if (F.numElementos == TAMANHO) {

		return true;

	}

	return false;
}
void insere(FilaCircular& F, char& elemento, bool& deuCerto) {

	if (cheia(F)) {

		deuCerto = false;

	}
	else {

		deuCerto = true;

		// Se o último elemento estiver no final do vetor, insere-se um novo elemento no inicio.
		if (F.final == TAMANHO) {

			F.final = 0;
			F.elementos[F.final] = elemento;
			F.numElementos++;
			F.final++;

		}
		else {

			F.numElementos++;
			F.elementos[F.final] = elemento;
			F.final++;

		}

	}

}

void retira(FilaCircular& F, char& elemento, bool& deuCerto) {

	if (vazia(F)) {

		deuCerto = false;

	}
	else {

		char vetorElementosAux[TAMANHO];

		int marcanumeroDeElementos = F.numElementos;
		int marcaPrimeiroElemento = F.primeiro;
		int marcaUltimoElemento = F.final;

		int k = 0;
		for (int i = marcaPrimeiroElemento + 1; i < marcaUltimoElemento; i++) {

			// guarda-se os elementos da Fila, com excessão àquele aretirar, em um vetor auxiliar.
			vetorElementosAux[k] = F.elementos[i];
			k++;

		}

		cria(F); // a operação cria é utilizada para eliminar-se os elementos da Fila.

		int k2 = 0;
		for (int i = marcaPrimeiroElemento + 1; i < marcaUltimoElemento; i++) {

			// guarda-se os elementos do vetor auxiliar na fila criada.
			F.elementos[i] = vetorElementosAux[k2];
			k2++;

		}

		// atualiza-se as variáveis da fila
		F.primeiro = marcaPrimeiroElemento + 1;
		F.final = marcaUltimoElemento;
		F.numElementos = marcanumeroDeElementos - 1;
		deuCerto = true;

		if (vazia(F)) {

			// Se a fila tornar-se vazia, a operação cria garante a
			cria(F);

		}

	}

}