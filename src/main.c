#include <stdio.h>
#include "treino.h"

#define MAX_TREINOS 100

int main(){
    Treino treinos[MAX_TREINOS];
    int total = 0;

    printf("LOG DE ACADEMIA - TESTE\n\n");

    adicionar_treino(treinos, &total);

    printf("=== TREINO ADICIONADO ===\n");
    printf("Data: %s\n", treinos[0].data);
    printf("Exercício: %s\n", treinos[0].exercicio);
    printf("Peso: %d kg\n", treinos[0].peso);
    printf("Repetições: %d\n", treinos[0].repeticoes);
    printf("Séries: %d\n", treinos[0].series);

    return 0;
}