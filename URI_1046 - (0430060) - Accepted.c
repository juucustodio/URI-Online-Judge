#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main (){
    int I,F,D;
    
    scanf("%i %i",&I,&F);
    
    if (I>F)
      D = (24-I)+F;
    else
        D = F-I;
     printf("O JOGO DUROU %i HORA(S)\n",D);
	
 return 0;
    
    }
    
