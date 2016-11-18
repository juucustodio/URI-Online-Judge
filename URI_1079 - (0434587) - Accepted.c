#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N;
	float Y,X,Z,M;
	scanf("%i",&N);
	while (N > 0){
	
		scanf("%f %f %f",&X,&Y,&Z);
		M = ((X*2)+(Y*3)+(Z*5))/10;
		printf("%.1f\n",M);
	
	
	N = N-1;
	}

	return 0;
}