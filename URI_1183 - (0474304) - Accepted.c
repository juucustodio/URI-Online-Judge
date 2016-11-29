#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
 
int main (){

	double soma=0,matriz[12][12];
	int col,lin,li;
	char O;
	for (col = 0 ; col <12;col++)
		for (lin = 0; lin < 12; lin++)
			matriz[lin][col] = 0;
	
	
	scanf("%c",&O);

		for (lin = 0; lin < 12; lin++)
			for (col = 0 ; col <12;col++){
				scanf("%lf",&matriz[lin][col]);
			}
	li = 10;
		
	for (col = 11; col >0;col--){
		for (lin = li;lin>=0;lin--){
			soma = soma+ matriz[lin][col];
		}
		li = li-1;
		}
	if (O == 'S')
		printf("%.1lf\n",soma);
	else{
		soma = soma/66.0;
		printf("%.1lf\n",soma);	
	}	

return 0;
}