#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main () {

	int s=0,aux,trocas,cont,l,n,trem[51];
	
	scanf("%d",&n);
	
	while (n>0){
		scanf("%d",&l);
	for(cont = 0;cont<l;cont++){
		scanf("%d",&trem[cont]);
	}
	trocas = 1;
	while (trocas > 0){
		trocas = 0;
	for (cont = 0;cont<l-1;cont++){
		if (trem[cont]>trem[cont+1]){
			aux = trem[cont];
			trem[cont] = trem[cont+1];
			trem[cont+1] = aux;
			trocas = 1;
			s = s+1;
		}
	}
	
	
	}
	printf("Optimal train swapping takes %d swaps.\n",s);
	s = 0;
	n=n-1;
	}




return 0;
}