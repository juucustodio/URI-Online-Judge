#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main () {
	int T=0,K,N;
	scanf("%d",&T);	
	while(T>0){
		scanf("%d",&K);
		while(K>0){
			scanf("%d",&N);
			switch (N){
				case 1:
					printf("Rolien\n");
					break;
				case 2:
					printf("Naej\n");
					break;					
				case 3:
					printf("Elehcim\n");				
					break;				
				case 4:
					printf("Odranoel\n");
					break;
			}
			K--;
		}		
	
		T--;
	}	
	
	return 0;
}