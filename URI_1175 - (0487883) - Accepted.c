#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int S=0,entrada[20],saida[20],cont;
	
	for (cont=0;cont<20;cont++)
		scanf("%d",&entrada[cont]);
	for (cont=19;cont>=0;cont--){
		saida[cont] = entrada[S];
		S = S+1;
	}
	for(cont=0;cont<20;cont++)
		printf("N[%d] = %d\n",cont,saida[cont]);
		
return 0;
}