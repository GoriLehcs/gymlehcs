#include <stdio.h>
#include "arquivo.h"

#define ARQUIVO "data/treinos.csv"

void salvar_treinos(const Treino treinos[], int total) {
    FILE *arquivo = fopen(ARQUIVO, "w");
    if (arquivo == NULL) {
        prinf("Erro ao salvar arquivo!");
        return;
    }

    //cabeçalho
    fprintf(arquivo, "data,exercicio,series,repeticoes,peso\n");


    //Dados
    for (int i = 0; i < total; i++) {
        fprintf(arquivo, "5s,%s,%d,%d,%d\n",
            treinos[i].data,
            treinos[i].exercicio,
            treinos[i].series,
            treinos[i].repeticoes,
            treinos[i].peso)
    }

    fclose(arquivo);
    printf("Treinos salvos em %s\n", ARQUIVO);
}

int carregar_treinos(Treino treinos[]) {
    FILE *arquivo = fopen(ARQUIVO, "r");
    if (arquivo == NULL) {
        return 0; //arquivo vazio
    }

    char linha[200];
    int total = 0;

    fgets(linha, sizeof(linha), arquivo);

    while (fgets(linha, sizeof(linha), arquivo) != NULL && total < 1000) {
        linha[strcspn(linha, "\n")] = '\0';

        char *token - strtok(linha, ",");
        if (token == NULL) continue;
        strcpy(treinos[totoal].data, token);

        token = st
    }
}
