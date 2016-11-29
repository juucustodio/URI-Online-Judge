#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int A,B,C,T;
	scanf("%d",&A);
	while(A != 0){
	scanf("%d %d",&B,&C);
		T = A*B;
		T = (T*100)/C;
		T = sqrt(T);
		printf("%d\n",T);
		scanf("%d",&A);

	}

return 0;
}