#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct regPilha{char s; struct regPilha *prox ; }TPilha;

typedef struct descPilha{TPilha *topo ;}TDesc ;

void inicializar(TDesc *descritor)
{	descritor->topo = NULL;
	
}

void empilhar(char lista,TDesc *descritor)
{	TPilha *aux;
	aux = (TPilha *) malloc(sizeof( TPilha ));
	aux->s = lista;
	aux->prox = descritor->topo;
	descritor->topo = aux;
	
}

void desempilhar(TDesc *descritor)
{	TPilha *aux;
	aux = descritor->topo;
	descritor->topo = descritor->topo->prox;
	free(aux);
	aux = descritor->topo;
}



int main (){
	char n[10002];
	int cont,t,j;
	TDesc descritor;

	while(scanf("%s",n) != EOF){
		t = strlen(n);
		inicializar(&descritor);
		j = 0;

		for(cont=0;cont<t;cont++){

			if(n[cont] == ')' && descritor.topo == NULL){ 
				j = 1;
				break;
			}

			else if(n[cont]=='(')
				empilhar(n[cont], &descritor);
				
				
			else if(n[cont] == ')' && descritor.topo != NULL)
					desempilhar(&descritor);

				
		
		
		}
		

		if(descritor.topo == NULL && j == 0)
			printf("correct\n");
		if(descritor.topo != NULL || j == 1)
			printf("incorrect\n");



	}



return 0;
}
