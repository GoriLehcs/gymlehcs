#ifndef TREINO_H
#define TREINO_H

#define MAX_EXERCICIO 50
#define MAX_DATA 11

typedef struct{
    char data[MAX_DATA];
    char exercicio[MAX_EXERCICIO];
    int peso;
    int repeticoes;
    int series;
} Treino;

void adicionar_treino(Treino treinos[], int* total);

#endif
