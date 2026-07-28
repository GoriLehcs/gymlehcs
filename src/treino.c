#include <stdio.h>
#include "treino.h"
#include <time.h>

void obter_data_atual(char data[]){
    time_t agora = time(NULL);
    struct tm *hora_atual = localtime(&agora);
    strftime(data, 11, "%d/%m/%Y", hora_atual);
}

void adicionar_treino(Treino treinos[], int *total){
    Treino t;
    int c;

    printf("\n====== NOVO TREINO =======\n");
    obter_data_atual(t.data);
    printf("Data: %s\n", t.data);


    printf("Exercício: ");
    scanf(" %[^\n]", t.exercicio);

    while ((c = getchar()) != '\n' && c != EOF) {}
    
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
