#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

Fila* criar_fila(){
    Fila* fila = malloc(sizeof(Fila)); //aloca memoria para a estrutura da fila
    if(fila == NULL) {//se acontecer uma falha na alocação encerra programa
        printf("Alocacao nao foi feita\n");
        exit(1);
    }
    fila->prim = NULL; //inicializa os ponteiro do primeiro elemento com com vazios
    fila->ult = NULL; //inicializa os ponteiro do ultimo elemento com com vazios

    return fila; //retorna o pronteiro para fila criada
    
}

void insirir_final(Fila* l, int idade){
    ElemNo* no = malloc(sizeof(ElemNo));
    if(no == NULL) {//se acontecer uma falha na alocação encerra programa
        printf("Alocacao nao foi feita\n");
        exit(1);
    }

    no->idade = idade; //atribui valor
    no->ant = l->ult; //define o ponteiro para elemetno anterior
    no->prox = NULL; //prox é null porque é ultimo

    if(l->ult != NULL){//se nao vazia, conecta o ultimo no no novo no
        l->ult->prox = no;
    }
    else{//se vaiza, o novo no é o primeiro
        l->prim = no;
    }
    l->ult = no;//atualiza ponteiro de ultimo
}

void retira_inicio(Fila* l){
    if(l == NULL || l->prim == NULL){
        return;
    }

    ElemNo* p = l->prim; //comeca do primeiro elemento 

    l->prim = p->prox; //atualiza para o prox

    if(l->prim != NULL){ //s nao for o ultimo elemento
        l->prim->ant = NULL; // o novo primento elemento nao tem anterior
    }
    else{//caso  for o ultimo elemnto
        l->ult = NULL; //lista fica vazia
    }

    free(p);//libera a memoria do elemento removido
}

void imprime_insersao(Fila* l){ //imprime a lista 
    if(l == NULL) {//se acontecer uma falha na alocação encerra programa
        return;
    }

    ElemNo* p = l->prim; //comeca do primeiro   
    if(l->prim == NULL) {//se acontecer uma falha na alocação encerra programa
        printf("Lista vazia\n"); 
        return;
    }

    for(;p != NULL; p = p->prox){//percorre os elementos e imprime as idades
        printf("%d ", p->idade);
    }
    printf("\n");
}

void imprime(Fila* l){ //imprime a lista 
    if(l == NULL) {//se acontecer uma falha na alocação encerra programa
        return;
    }

    ElemNo* p = l->prim; //comeca do primeiro   
    if(l->prim == NULL) {//se acontecer uma falha na alocação encerra programa
        printf("Todos foram atendidos!!!\n"); 
        return;
    }
    printf("Prioridades:\n");
    printf("Falta: ");

    for(;p != NULL; p = p->prox){//percorre os elementos e imprime as idades
        printf("%d ", p->idade);
    }
    printf("\n");
}

void ordenar(Fila* l){
    ElemNo* pUlt = NULL;  //ponterior marcando o ultimo é null  
    ElemNo* pIni;    //ponteiro aux marcando o inicio

     if(l == NULL) {//se vazia imprime mesagem e sai da funcao
        printf("Lista vazia\n");
        return;
    }

    int mudou = 1; //flag para controlarse houver troca durante itencoa
    while(mudou){
        mudou = 0;
        pIni = l->prim;
        while(pIni->prox != pUlt){
            if(pIni->idade < pIni->prox->idade){//comara elementos adjecentes
                //Vai fazer a troca usando a variavel temporaria e ordenado de forma decrescente
                int temp;
                temp = pIni->idade;
                pIni->idade = pIni->prox->idade;
                pIni->prox->idade = temp;
                mudou = 1; //indica que aconteceu troca
            }
            pIni = pIni->prox;
        }
        pUlt = pIni; //ultimo elemento esta ordenado
    }    
}

void liberar_memoria(Fila* l){
     if(l == NULL) {//se vazia imprime mesagem e sai da funcao
        printf("Lista vazia\n");
        return;
    }

    ElemNo* noAtual = l->prim;

    while(noAtual != NULL){
        ElemNo* noTemp = noAtual;
        noAtual = noAtual->prox;
        free(noTemp);//libera memoria do elemento atual
    }

    free(l); //libera memoria da estrutura da lista
}

