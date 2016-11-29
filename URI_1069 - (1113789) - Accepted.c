#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef struct regDiamante{char s; struct regDiamante *prox ; }TDiamante;

typedef struct descDiamante{TDiamante *topo ;}TDesc ;
void inicializar(TDesc *descritor)
{	descritor->topo = NULL;
	
}

void empilhar(char lista,TDesc *descritor)
{	TDiamante *aux;
	aux = (TDiamante *) malloc(sizeof( TDiamante ));
	aux->s = lista;
	aux->prox = descritor->topo;
	descritor->topo = aux;
	
}

void desempilhar(TDesc *descritor)
{	TDiamante *aux;
	aux = descritor->topo;
	descritor->topo = descritor->topo->prox;
	free(aux);
	aux = descritor->topo;
}



int main () {

	char lista[1002];
	int n,cont,t,diamantes;
	TDesc descritor;
	
	
	
	scanf("%d",&n);
	
	while(n>0){
		diamantes = 0;

		scanf("%s",lista);
		t = strlen(lista);
		
		inicializar(&descritor);
		
		for(cont=0;cont<t;cont++){

			if(lista[cont]=='<' || lista[cont]=='>'){
				if(lista[cont] == '<')
					empilhar(lista[cont], &descritor);
				
				
				if(lista[cont] == '>'  && descritor.topo != NULL){
					diamantes++;
					desempilhar(&descritor);
				}
			
			}
			
		
		
		}
		
		printf("%d\n",diamantes);
	
	
	
	n--;
	}






return 0;
}
