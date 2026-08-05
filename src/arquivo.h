#ifndef ARQUIVO_H
#define ARQUIVO_H

#include "treino.h"

void salvar_treinos(const Treino treinos[], int total);
int carregar_treinos(Treino treinos[]);
int ler_numeros(char *entrada, int numeros[], int max);

#endif
