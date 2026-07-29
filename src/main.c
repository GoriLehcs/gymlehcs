#include <stdio.h>
#include "treino.h"
#include "arquivo.h"

#define MAX_TREINOS 100

int main(){
    Treino treinos[MAX_TREINOS];
    int total = 0;
    int opcao;
    int c;  //variável para limpar o buffer do teclado

    total = carregar_treinos(treinos);

    do {
        printf("\n========== Menu ==========\n");
        printf("1. Adicionar treino\n");
        printf("2. Listar treinos\n");
        printf("3. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        while ((c = getchar()) != '\n' && c != EOF) {}

        switch(opcao){
            case 1:
            adicionar_treino(treinos, &total);
            salvar_treinos(treinos, total);
            break;

            case 2:
            listar_treinos(treinos, total);
            break;

            case 3:
            printf("Saindo...\n");
            break;

            default:
            printf("Opcao invalida\n");
            break;
        }
    } while (opcao != 3);
    return 0;
}