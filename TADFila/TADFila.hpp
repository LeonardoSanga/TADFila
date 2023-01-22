#pragma once

const int TAMANHO_FILA = 5;

struct Fila {

	char elementos[TAMANHO_FILA];
	int ultimo;

};

void cria(Fila& F);

bool cheia(Fila& F);

bool vazia(Fila& F);

void insere(Fila& F, char& elemento, bool& deuCerto);

void retira(Fila& F, char& elemento, bool& deuCerto);