#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int X,cont,Y;
	scanf("%d",&X);
	
	for (cont = 1; cont<=X;cont++){
		Y=X%cont;
		if (Y==0)
		printf("%d\n",cont);
		
	}
	

return 0;
}