#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main () {
	
	int X,Y;
	
	do{
	scanf("%d %d",&X,&Y);
	if  (X>0 && Y > 0){
	printf("primeiro\n");
	
	}
	if  (X<0 && Y > 0){
	printf("segundo\n");
	
	}
	if  (X<0 && Y < 0){
	printf("terceiro\n");
	
	}
	if  (X>0 && Y < 0){
	printf("quarto\n");
	
	}
	}while (X != 0 || Y != 0);
	return 0;

	}