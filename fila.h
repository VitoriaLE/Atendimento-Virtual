#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct elemNo ElemNo;
struct elemNo
{
    int idade;
    ElemNo* prox;
    ElemNo* ant;

};
/*
    Estrututa representa o no da fila com os elementos e tem a idade como dado da pessoa
    Contem os ponterios de navegaca o anterior e proximo
    
*/
typedef struct fila Fila;
struct fila
{
    ElemNo* prim;
    ElemNo* ult;

};
/*
    Estrutura fila mantem os pontiros para o primeiro e ultimo elemento
    E facilita as operacaos de manipulacao da fila
*/
Fila* criar_fila();
/*
    Tem como objetivo inicializar a uma fila nova e vazia e aloca a memoria para a estrutura principal 
    Os ponteiros prim e ult sao inicialiados como NULL
    Retorna o proterio para  anova lista criada
*/
void insirir_final(Fila* l, int idade);
/*
    Tem como objetivo insiri um novo elemento no final da fila e aloca a memoria do novo nó
    Atualiza os ponterios p/ permanecerem conectados

*/
void retira_inicio(Fila* l);
/*
    Tem como objetivo retirar os elementosno inicio até que a fila esteja vazia
    Atualiza os ponteiro sprim para o proximo elemento
    Vai verificar os caos em que a fila vazia ou ultimo elemento
    Libera o elemento removido
*/
void imprime_insersao(Fila* l);
/*
    Tem como objetivo imprime os elemento da insersao e tambem sao alocados 
    Percorre  a fila do inicio ao fim
    Mostrta as idades que foram inseridas
    Depois de utilizar a funcao de ordenacao descrente, as idades serqam imprimidas
*/
void imprime(Fila* l);
/*
    Tem como objetivo imprimir os elemento a cada interecao
    Toda a vez que um elemento é retirado, sera imprimido as idades restantes da fila
    E quando a fila estiver vazia, a mensagem de que as pessoas foram atenidas aparecerá
    
*/
void ordenar(Fila* l);
/*
    Tem como obejtivo ordenar a fila do maior para o menor
    Vai utilizar a comparacao e realizar a troca dos ponteiros 
    Nao cria copia de dados
*/
void liberar_memoria(Fila* l);
/*
    Tem como objetivo liberar a memoria utilizada na fila
    Percorre os elementos liberando cada no e qa proria fila

*/
#endif
