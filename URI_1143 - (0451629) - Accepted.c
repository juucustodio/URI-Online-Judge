#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	int N,cont,T,X;
	
	scanf("%d",&N);
	X = 0;
	for (cont = N;cont >0;cont = cont -1){
	X = X+1;
	printf("%d %d %d\n",X,X*X,X*X*X);
	
		}



    return 0;
    
}