#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main () {
	char vetor[201];
	double soma = 0;
	int r,y=0;
	
	while(scanf("%s",vetor) && strcmp(vetor,"*") != 0 ){
		
		r = strlen(vetor);
		r--;	
		while(r>=0){
			
			if(vetor[r] == '/'){
				if(soma == 1)
					y++;
				soma = 0;	
			}
			else if(vetor[r] == 'W')
					soma = soma + 1;
			else if(vetor[r] == 'H')
					soma = soma + 0.5;
			else if(vetor[r] == 'Q')
					soma = soma + 0.25;
			else if(vetor[r] == 'E')
					soma = soma + 0.125;
			else if(vetor[r] == 'S')
					soma = soma + 0.0625 ;
			else if(vetor[r] == 'T')
					soma = soma + 0.03125;
			else if(vetor[r] == 'X')
					soma = soma + 0.015625;					

			r--;
		
		}
			printf("%d\n",y);
			y = 0;
	}




return 0;
}