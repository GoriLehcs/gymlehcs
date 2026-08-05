#include "arquivo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO "data/treinos.csv"

void salvar_treinos(const Treino treinos[], int total) {
  FILE *arquivo = fopen(ARQUIVO, "w");
  if (arquivo == NULL) {
    printf("Erro ao salvar arquivo!");
    return;
  }

  // cabeçalho
  fprintf(arquivo, "data,exercicio,series,repeticoes,peso\n");

  // Dados
  for (int i = 0; i < total; i++) {
    fprintf(arquivo, "%s,%s,%d,%d,%d\n", treinos[i].data, treinos[i].exercicio,
            treinos[i].series, treinos[i].repeticoes, treinos[i].peso);
  }

  fclose(arquivo);
  printf("Treinos salvos em %s\n", ARQUIVO);
}

int carregar_treinos(Treino treinos[]) {
  FILE *arquivo = fopen(ARQUIVO, "r");
  if (arquivo == NULL) {
    return 0; // arquivo vazio
  }

  char linha[200];
  int total = 0;

  fgets(linha, sizeof(linha), arquivo);

  while (fgets(linha, sizeof(linha), arquivo) != NULL && total < 1000) {
    linha[strcspn(linha, "\n")] = '\0';

    char *token = strtok(linha, ",");
    if (token == NULL)
      continue;
    strcpy(treinos[total].data, token);

    token = strtok(NULL, ",");
    if (token == NULL)
      continue;
    strcpy(treinos[total].exercicio, token);

    token = strtok(NULL, ",");
    if (token == NULL)
      continue;
    treinos[total].series = atoi(token);

    token = strtok(NULL, ",");
    if (token == NULL)
      continue;
    treinos[total].repeticoes = atoi(token);

    token = strtok(NULL, ",");
    if (token == NULL)
      continue;
    treinos[total].peso = atoi(token);

    total++;
  }

  fclose(arquivo);
  printf("Carregados %d treinos de %s\n", total, ARQUIVO);
  return total;
}

int ler_numeros(char *entrada, int *numeros, int max) {
  char *token;
  int count = 0;

  token = strtok(entrada, " ");

  while (token != NULL && count < max) {
    numeros[count] = atoi(token);
    count++;

    token = strtok(NULL, " ");
  }
  return count;
}
