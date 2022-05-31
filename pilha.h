#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    char email[150];
    char fone[15];
} contato;


typedef struct{
	contato c;
	struct no* prox;
} empilha;


typedef struct{
     empilha *topo;
} pilha;
	
int push (pilha *p, contato c);
int pop  (pilha *p, contato *c);
int top  (pilha *p, contato *c);
int tamanho(pilha *p);
int empty(pilha *p);
void inicializar(pilha *p);
