#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    //criacao da fila
    Fila* fila = criar_fila();
    int idade, quantPessoas = 0;

    printf("\tFILA BRADESCO\t\n");

    //Entrada de idades
    while(scanf("%d", &idade) != EOF){
        insirir_final(fila, idade);//insere as idade na lista apartir do ultimo
        quantPessoas++;
    }

    printf("Quantidades de atendimentos: %d\n", quantPessoas);
    //imprime as idades na ordem de inserssao
    printf("Foram inseridas essas idades:\n");

    imprime_insersao(fila);
    printf("\n");

   //Ordena a fila
    printf("Fila ordenada por prioridades:\n");
    ordenar(fila);
    imprime_insersao(fila);

    printf("\n");

    for(int i = 0; i < quantPessoas; i++){
        //Remocao dos elementos
        retira_inicio(fila);
        imprime(fila);
        printf("\n");

    }

    //libera memoria
    liberar_memoria(fila);

    return 0;
}