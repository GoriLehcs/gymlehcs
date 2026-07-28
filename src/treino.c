#include <stdio.h>
#include "treino.h"

void adicionar_treino(Treino treinos[], int *total){
    Treino t;
    int c;

    printf("\n====== NOVO TREINO =======\n");
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

void listar_treinos(const Treino treinos[], int total) {
    if (total == 0) {
        printf("\n --- Não há treino registrado --- \n");
    } else {
        printf("\n=========== TREINOS REGISTRADOS ===========\n");
        for (int i = 0; i < total; i++) {
            printf("\nData: %s\n", treinos[i].data);
            printf("Exercício: %s\n", treinos[i].exercicio);
            printf("Séries: %d  |  Repetições: %d  |  Peso: %d kg\n", 
                   treinos[i].series, 
                   treinos[i].repeticoes, 
                   treinos[i].peso);
        }
    }
}
