#include <stdio.h>
#include "treino.h"

void adicionar_treino(Treino treinos[], int *total){
    Treino t;
    int c;

    printf("=== NOVO TREINO ===\n");
    printf("Data: ");
    scanf("%s", t.data);

    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Exercício: ");
    scanf(" %[^\n]", t.exercicio);

    printf("Séries: ");
    scanf("%d", &t.series);
    
    printf("Repetições: ");
    scanf("%d", &t.repeticoes);
    
    printf("Peso (kg): ");
    scanf("%d", &t.peso);

    treinos[*total] = t;
    (*total)++;

}