#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int S,Y,X,cont,div;
	
	scanf("%d",&X);
	
	while (X!=0){
		div = X%2;
		if (div == 0){
			S = X;
			Y = X;
			for (cont =0;cont<4;cont++){
				Y = Y+2;
				S=S+Y;
			}
	
		}
		else
		{
			
			S = X+1;
			Y = X+1;
			for (cont =0;cont<4;cont++){
				Y = Y+2;
				S=S+Y;
			}		
		
		
		}
	
	
	
	printf("%d\n",S);
	scanf("%d",&X);
	}

return 0;
}