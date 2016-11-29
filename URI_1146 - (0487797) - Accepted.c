#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int X,cont;
	scanf("%d",&X);
	while (X!=0){
	
	for (cont=1;cont<=X;cont++){
		if (cont == X){
			printf("%d\n",cont);
		}
		else{
			printf("%d ",cont);
		}
	
	
	}
	scanf("%d",&X);

	
	}
	
	

return 0;
}