#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
typedef	struct {
		int numero;
		int mod;
	}numero;

int comp ( const void *p1, const void *p2 )
{  numero *i = ( numero *)p1, *j = (numero *)p2;
	if( i->mod < j->mod )
		return -1;
	else
	if( i->mod == j->mod ){
			if((i->numero%2) == 0 && (j->numero%2)!=0){
				return 1;
			}
			else if((i->numero%2) != 0 && (j->numero%2)==0){
				return -1;
			}
			else if((i->numero%2) != 0 && (j->numero%2)!=0){
				if(i->numero < j->numero)
					return 1;
				else if(i->numero == j->numero)
					return 0;
				else
					return -1;
			}
			else if((i->numero%2) == 0 && (j->numero%2)==0){
				if(i->numero < j->numero)
					return -1;
				else if(i->numero == j->numero)
					return 0;
				else
					return 1;
			}			
		
	}
	else
		return 1;
}	
	
int main () {
	
	numero num[10002];
	int n,m,cont;
	
	scanf("%d %d",&n,&m);
	
	while(n != m || m != 0){
			for(cont = 0;cont < n;cont++){
				scanf("%d",&num[cont].numero);
				num[cont].mod = (num[cont].numero%m);				
			}
			qsort(num,n,sizeof(numero),comp);
			printf("%d %d\n",n,m);	
			for(cont = 0;cont < n;cont++){
				printf("%d\n",num[cont].numero); 			
			}			
		
		scanf("%d %d",&n,&m);	
	}
	printf("%d %d\n",n,m);	
	return 0;
}