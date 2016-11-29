#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct {	char nome[1000];
					char cor[10];
					char t;
	} TCamiseta;

void LimpaBuffer(){
	while(getchar()!='\n');
		return;
}	

int cmp(const void * p1, const void * p2){
	TCamiseta *i = (TCamiseta *)p1, *j = (TCamiseta *)p2;
		
		if(strcmp(i -> cor, j -> cor)== 0 ){
			if(i -> t == j -> t)
				return strcmp(i -> nome,j -> nome);
		
			else if(i -> t > j -> t)
				return -1;
			else
				return 1;			
		}
		else 
			return strcmp(i -> cor, j -> cor);
}
	
int main(){
		int n,r=0,cont,c;
		TCamiseta lista[60];
		
		
		
		while(scanf("%d",&n)  && n != 0){
			LimpaBuffer();
			if(r == 1)
				printf("\n");
			
			for(cont = 0;cont<n;cont++){
				fgets(lista[cont].nome,1000,stdin);
				
				for( c=0; lista[cont].nome[c] >= ' '; c++ );
					lista[cont].nome[c] = '\0';
					
				scanf("%s",lista[cont].cor);
				scanf(" %c",&lista[cont].t);
				LimpaBuffer();				
					
			}
		qsort(lista,n,sizeof(TCamiseta),cmp);	
		
			for(cont = 0;cont<n;cont++)
				printf("%s %c %s\n",lista[cont].cor,lista[cont].t,lista[cont].nome);
			r = 1;
		
		}

return 0;
}