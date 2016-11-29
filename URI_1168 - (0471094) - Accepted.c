#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
	int A,T=0,X,cont;
	char led[(10^100)+1];

	scanf("%d",&X);
	while (X>0){
	scanf("%s",led);
	A = strlen(led);
	T = 0;	
	for (cont = 0;cont < A;cont++){
			
			if (led[cont] == '1')
				T = T+2;
			
			if (led[cont] == '2')
				T = T+5;
			if(led[cont] == '3')
				T = T+5;
			if (led[cont] == '4')
				T = T+4;
			
			if(led[cont] == '5')	
				T = T+5;
			
			if (led[cont]=='6')
				T = T+6;
			
			if (led[cont]=='7')
				T = T+3;
			
			if (led[cont]=='8')
				T = T+7;
			if (led[cont] == '9')
				T = T+6;
			if (led[cont]=='0')
				T = T+6;


	}
	
		printf("%d leds\n",T);
		X = X-1;

	}		



return 0;
}