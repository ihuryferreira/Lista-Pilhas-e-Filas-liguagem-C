#include <stdio.h>
#include <stdlib.h>
#include <iostream>
struct ponto
{
	float x;
	float y;
	struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos;


void add (float x, float y){
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p->x = x;
	p->y = y;
	p->prox = listaPontos;
	listaPontos = p;
}

void imprime(Ponto *p){//recursivamente

	if(p!=NULL){
		printf("\nPonto(%.0f, %.0f)", p->x,p->y);
		imprime(p->prox);
	}
	
	}


int main(){
	
	
	 add(1,5);
	 add(2,7);
	 add(5,3);
	 Ponto *auxLista = listaPontos;
	 imprime(auxLista);
	
	return 0;
}

