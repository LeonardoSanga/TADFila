#pragma once

const int TAMANHO = 5;

struct FilaCircular {

	char elementos[TAMANHO];
	int primeiro;
	int final;
	int numElementos;

};

void cria(FilaCircular& F);

bool vazia(FilaCircular& F);

bool cheia(FilaCircular& F);

void insere(FilaCircular& F, char& elemento, bool& deuCerto);

void retira(FilaCircular& F, char& elemento, bool& deuCerto);