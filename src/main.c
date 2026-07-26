#include <stdio.h>
#include "treino.h"

#define MAX_TREINOS 100

int main(){
    Treino treinos[MAX_TREINOS];
    int total = 0;

    printf("LOG DE ACADEMIA - TESTE\n\n");

    adicionar_treino(treinos, &total);
    adicionar_treino(treinos, &total);

    listar_treinos(treinos, total);

    return 0;
}