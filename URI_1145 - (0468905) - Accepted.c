#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
	int c,X,Y,cont=1,T;
	scanf("%d %d",&X,&Y);
	c= 1;
	T =1;
	while (cont<=Y){
	
		while (c<=X){
			if (c == X){
				printf("%d",cont);
				cont = cont+1;
				c = c+1;
			}
			else{
				printf("%d ",cont);
				cont = cont+1;
				c = c+1;	
			}
		} 
	c = 1;
	printf("\n");
		
	
	}






	return 0;
}	