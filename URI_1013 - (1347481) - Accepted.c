#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int A,B,C,T;

	scanf("%d %d %d",&A,&B,&C);
		T = (A+B+abs(A-B))/2;
		T = (T+C+abs(T-C))/2;
		printf("%d eh o maior\n",T);
		

return 0;
}