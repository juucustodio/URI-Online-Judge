#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {char palavra[20]; double score;} Tdicionario;

int comp(const void *p1, const void *p2)
{
	Tdicionario *i,*j;
	i=(Tdicionario*)p1;
	j=(Tdicionario*)p2;
	return strcmp(i->palavra,j->palavra);
}

int main () {
	int m,n,cont,x;
	double soma=0;
	Tdicionario dicionario[1100];
	char texto[10000];
	Tdicionario *retorno;
	
	scanf("%d %d",&m,&n);

	for(cont = 0;cont<m;cont++)
		scanf("%s %lf",dicionario[cont].palavra,&dicionario[cont].score);
	
	qsort(dicionario,m,sizeof(Tdicionario),comp);
	
	for(cont = 0;cont<n;cont++){
		soma=0;
		while(scanf("%s", texto) && strcmp(texto,".") != 0){
			retorno = (Tdicionario *)bsearch(texto,dicionario->palavra,m,sizeof(Tdicionario),comp);
			if (retorno != NULL)
				soma += retorno->score;
		}
		printf("%.0lf\n", soma);
	}

return 0;
}