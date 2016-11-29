#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{int id, qtd;} Tnumero; 

int cmp(const void *p1, const void *p2)
{	Tnumero *i=(Tnumero*) p1, *j=(Tnumero*) p2;
	return i->qtd - j->qtd;
}

int main()
{
	Tnumero numeros[500];
	int n, c, k, num;
	int i, j;
	
	while(scanf("%d %d %d", &n, &c, &k) && (n || c || k))
	{	
		for (i=0; i<500; i++){
			numeros[i].id = i;
			numeros[i].qtd = 0;
		}
		for(i=0; i<n; i++)
			for(j=0; j<c; j++){
				scanf("%d", &num);
				numeros[num].qtd++;
			}
		qsort(&numeros[1], k, sizeof(Tnumero), cmp);
			
		printf("%d", numeros[1].id);
		
		for(i=2; i <= k && numeros[i].qtd == numeros[1].qtd; i++)
			printf(" %d", numeros[i].id);
		printf("\n");
	}
	return 0;
}