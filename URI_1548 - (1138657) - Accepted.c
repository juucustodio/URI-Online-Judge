#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {int x; int bit;}TFila;

int cmp(const void * p1, const void * p2){
	TFila *i = (TFila *)p1, *j = (TFila *)p2;
		
		if(i->x < j->x){
			return 1;
		}
		else if(i->x > j->x){			
			return -1;}
		
		else
			return 0;			
		
}


int main () {

	int cont,n,m,soma,y;
	TFila fila[1000];
	scanf("%d",&n);
	
	while(n>0){
		soma = 0;
		scanf("%d",&m);
	
		for(cont = 0;cont<m;cont++){
			scanf("%d",&y);
			fila[cont].x = y;
			fila[cont].bit = cont;
				
		}
		qsort(fila,m,sizeof(TFila),cmp);
		
		for(cont = 0;cont<m;cont++){
		
			if(fila[cont].bit == cont){
				soma++;}
				
		}
		printf("%d\n",soma);
	
	n--;
	}



return 0;
}