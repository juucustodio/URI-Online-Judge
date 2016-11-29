#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int n,largada[30],chegada[30],c,l,trocas,aux=0,nTrocas=0,cont;
	
	while ((scanf("%d",&n)!= EOF))
	{
	
		for(c=1;c<=n;c++)
		{
			scanf("%d",&largada[c]);
		}	

		for(c=1;c<=n;c++)
		{
			scanf("%d",&chegada[c]);
		}	
		trocas = 1;
		while (trocas > 0){
			trocas = 1; 
		 			
			for(c=1;c<=n;c++)
			{
						
				for(l=1;l<=n;l++)
				{
					if((chegada[c]==largada[l]))
					{
						aux=largada[l];
							for(cont = l-1;cont>=1;cont--){
								largada[cont+1] = largada[cont];
														
							}
							if ((l-c)<0){
						nTrocas= nTrocas+((l-c)*-1);								
							}
							else
						nTrocas= nTrocas+(l-c);	
						
						largada[c]=aux;
						trocas = 0;
											
					}
									
				}
			}
		}
			
			printf("%d\n",nTrocas);

			nTrocas=0;
}
	return 0;
}