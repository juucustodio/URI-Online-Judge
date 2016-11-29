#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main ()
{
	int t,n,m,vetor[20500],cont,x,z=0;
	
	while(scanf("%d %d",&n,&m) && (n != 0 || m != 0)){ 
		for(cont = 0;cont < m;cont++)
			scanf("%d",&vetor[cont]);
		t = 0;
		for(cont = 0;cont < m;cont++){
			x = m-1;
			while(x>cont){
				if(vetor[cont] == vetor[x] && vetor[x] != 0){
					z = 1;
					vetor[x] = 0;}
				x--;
			}
			if(z==1)
				t++;
				z=0;
		}	
		printf("%d\n",t);
	}
return 0;
}