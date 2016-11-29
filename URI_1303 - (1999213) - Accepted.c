#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef	struct {
		int inscricao;
		int cp;
		int cn;
		int pontos;
	}placar;

int comp( const void *p1, const void *p2 )
{ placar *i = ( placar *)p1, *j = ( placar *)p2;
double ia, ja;
	if( i->pontos < j->pontos )
		return 1;
	else
	if( i->pontos == j->pontos ){
		if((i->cn == 0) || (j->cn == 0)){
			if(i->cn == 0)
				i->cn = i-> cp;
			
			if(j->cn == 0)
				j->cn = j-> cp;
			
		}
		ia = ((double)i->cp/i->cn);
		ja = ((double)j->cp/j->cn);
		
		if( ia < ja)
			return 1;
		else
		if(ia == ja){
			if(i->cp < j->cp)
				return 1;
			else
			if(i->cp == j->cp){
				if(i->inscricao < j->inscricao)
						return 1;
				else
						return -1;
			}
				
			else
				return -1;
		}
		else
			return -1;
	}
		
	else
		return -1;
}
	
	
int main (){
	int n, a,x,y,z,w,cont,h=0;
	placar tab[105];
	
	scanf("%d",&n);
	
	while(n != 0){
		memset(tab,0,sizeof(tab));
		
		
		a = (n*(n-1))/2;

		while(a > 0){
			scanf("%d %d %d %d",&x,&y,&z,&w);
			
			tab[x].inscricao = x;
			tab[x].cp += y;
			tab[x].cn += w;
			
			tab[z].inscricao = z;
			tab[z].cp += w;
			tab[z].cn += y;
			
			if(y > w){
				tab[x].pontos += 2;
				tab[z].pontos += 1;
			}
			else{
				tab[x].pontos += 1;
				tab[z].pontos += 2;				
			}
			a--;
		}
		
		qsort(tab,n+1,sizeof(placar),comp);
		a = (n*(n-1))/2;
		
		printf("Instancia %d\n",h+1);
		for(cont = 0; cont <= n-1;cont++){
			if(cont == n-1)
				printf("%d\n",tab[cont].inscricao);
			else
				printf("%d ",tab[cont].inscricao);
		}

				
		h++;
		scanf("%d",&n);
		if(n != 0)
			printf("\n");	
	}

return 0;
}