#include <stdio.h>
#include <stdlib.h>
#include "P05.h"

struct no{
    int dado;
    struct no *prox;
};

struct no *inicio = NULL;
struct no *fim = NULL;


    void insereFila (int valor){
        struct no *aux;

        aux = (struct no*)malloc(sizeof(struct no));
        aux -> dado = valor;
        aux -> prox = NULL;

        if(inicio == NULL){
            inicio = aux;
            fim = aux;
        }else{
            fim -> prox = aux;
            fim = aux;
        }
        printf("O valor %d, foi inserido na fila!\n", valor);
    }

    void removeFila(){
        struct no *aux;

        if(fim == NULL){
            printf("A fila esta vazia! Elemento nao removido!\n");
            return;
        }
        if(inicio == fim){
            fim == NULL;
            printf("O elemento %d foi removido com sucesso!\n", inicio->dado);
            free(inicio);
            return;
        }

        aux = inicio;
        inicio = inicio -> prox;
        printf("O elemento %d foi removido!\n", aux->dado);
        free(aux);
    }

    void inicioFila(){

        if(fim == NULL){
            printf("A lista esta vazia!");
            return;
        }
        printf("O elemento no inicio e %d", inicio ->dado);
    }

    void vazia(){
        if(fim == NULL){
            printf("A fila esta vazia!\n");
            return;
        }
        printf("A fila nao esta vazia!\n");
    }

    void imprime(){
        struct no *aux;

        if(fim == NULL){
            printf("A fila esta vazia!\n");
            return;
        }

        aux = inicio;
        int i=1;

        while(aux!=NULL){
            printf("#%d = %d\n",i, aux->dado);
            i++;
            aux = aux ->prox;
        }
    }
