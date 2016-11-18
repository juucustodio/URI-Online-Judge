#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int cont,X,Y,Z;
	X=7;
	Y=6;
	Z=5;
	for (cont = 1;cont<=9;cont = cont+2){
	

	
	printf("I=%d J=%d\n",cont,X);
	printf("I=%d J=%d\n",cont,Y);	
	printf("I=%d J=%d\n",cont,Z);
	X=X+2;
	Y=Y+2;
	Z=Z+2;
	}



return 0;
}