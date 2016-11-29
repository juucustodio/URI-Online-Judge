#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {

	int n, qt,s,vetor[15],cont,x=0,p = 9999,a;

	scanf("%d",&n);

	while (n>0){
		scanf("%d %d",&qt,&s);

		for(cont = 1;cont <= qt;cont++){
			scanf("%d",&vetor[cont]);
		
		}
		
		for(cont = 1;cont <= qt;cont++){
			if (vetor[cont]==s){
				x = 1;
				a = cont;
				break;	
			}
		
		}		

		if (x != 1){
			for(cont = 1;cont <= qt;cont++){
				if ((vetor[cont]<s) && ((s-vetor[cont])<p )){
					p = s-vetor[cont];
					a = cont;	
				}
				if ((vetor[cont]>s) && ((vetor[cont]-s)<p )){
					p = vetor[cont]-s;
					a = cont;	
				}			
						
			
			}

		}


	printf("%d\n",a);
	n = n-1;
	x = 0;
	p = 9999;
	}

return 0;
}