#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct regLista{ 
	int valor;
	struct regLista *prox;
};
typedef struct regLista TLista;

struct descrFila{ 
	TLista *inicio;
	TLista *final;
	int qtd;
};
typedef struct descrFila DFila;


void IniciaFila( DFila *d )
{
	d->inicio = NULL;
	d->final = NULL;
	d->qtd = 0;
}

void IncluiElemento( DFila *d, int numero )
{	TLista *aux;

	aux = (TLista *) malloc(sizeof( TLista ));
		aux->valor = numero;
		d->qtd += 1;													
		aux->prox = NULL;
		if( d->inicio == NULL )
			d->inicio = aux;
		else
		d->final->prox = aux;
		
	d->final = aux;
}


void ExcluiElemento( DFila *d, int n)
{	TLista *aux;

	if( d->inicio != NULL && d->qtd > 1)
	{ 
		aux = d->inicio;
		d->inicio = d->inicio->prox;

		if(d->qtd == n)
			printf(" %d", aux->valor);
		else
			printf(", %d", aux->valor);
		free(aux);
		d->qtd -= 1;
		aux = d->inicio;
		d->inicio = d->inicio->prox;
		d->final->prox = aux;
		d->final = aux;

	}
	else if(d->qtd == 1)
		printf("\nRemaining card: %d\n",d->final->valor);
}

int main () {

	int n,cont,t;
	DFila descritor;

	while(scanf("%d",&n) && n != 0){

		IniciaFila(&descritor);
		
		for(cont = 1;cont<=n;cont++)
			IncluiElemento(&descritor,cont);

		printf("Discarded cards:");
			t = n;
			while(t>=1){
				ExcluiElemento(&descritor, n);

			t--;}

	}



return 0;
}
