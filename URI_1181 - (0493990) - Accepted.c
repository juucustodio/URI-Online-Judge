#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	double matriz [12][12],S=0.0;
	char T;
	int P,lin,col;
	
	scanf("%d",&P);
	scanf(" %c",&T);

	
	for (lin = 0; lin <12;lin++){
		for (col = 0; col <12;col++){
			scanf("%lf",&matriz[lin][col]);
			if (lin==P)
			S = S+matriz[lin][col];
		}
	}
	if (T == 'M')
		S = S/12.0;
	
	printf("%.1lf\n",S);
	


return 0;
}