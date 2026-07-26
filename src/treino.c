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

void listar_treinos(const Treino treinos[], int total) {
    if (total == 0) {
        printf(" --- Não há treino registrado --- ");
    } else {
        printf("%-12s | %-20s | %8s | %12s | %8s\n",
            "Data", "Exercício", "Séries", "Repetições", "Peso");

        printf("--------------------------------------------------------\n");
        for (int i = 0; i < total; i++) {
            printf("%-12s | %-20s | %8d | %12d | %8d\n",
            treinos[i].data,
            treinos[i].exercicio,
            treinos[i].series,
            treinos[i].repeticoes,
            treinos[i].peso);
        }
        printf("--------------------------------------------------------\n");
    }
    // Se houver, mostrar tabela com cabeçalho
    // Cada linha deve ter data, exercício, peso, reps, séries
}
