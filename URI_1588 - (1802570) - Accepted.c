#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


typedef	struct {
		char nome[30];
		int pontos;
		int vitorias;
		int gols;
	}placar;


int comp( const void *p1, const void *p2 )
{ placar *i = ( placar *)p1, *j = ( placar *)p2;
	if( i->pontos < j->pontos )
		return 1;
	else
	if( i->pontos == j->pontos ){
		if(i->vitorias < j->vitorias)
			return 1;
		else
		if(i->vitorias == j->vitorias){
			if(i->gols < j->gols)
				return 1;
			else
			if(i->gols == j->gols)
				return 0;
			else
				return -1;
		}
		else
			return -1;
	}
		
	else
		return -1;
}

int main () {

	
	placar p[102];
	int T,N,M,cont,ga,gb,x;
	char na[30],nb[30];

	scanf("%d",&T);
	
	while(T>0){
		scanf("%d %d",&N,&M);
		for(cont = 0;cont<N;cont++){
			scanf("%s",p[cont].nome);
			p[cont].vitorias = 0;
			p[cont].pontos = 0;
			p[cont].gols = 0;
		}
		for(cont = 0;cont<M;cont++){
			scanf("%d %s %d %s",&ga,na,&gb,nb);
			if(ga > gb){
				for(x=0;x<N;x++){
					if(strcmp(na,p[x].nome)==0){
						p[x].vitorias++;
						p[x].pontos += 3;
						p[x].gols += ga;
						
					}
					else if(strcmp(nb,p[x].nome)==0){
						p[x].gols += gb;
					}
				}
			}
			else if(ga < gb){
				for(x=0;x<N;x++){
					if(strcmp(nb,p[x].nome)==0){
						p[x].vitorias++;
						p[x].pontos += 3;
						p[x].gols += gb;
						
					}
					else if(strcmp(na,p[x].nome)==0){
						p[x].gols += ga;
					}
				}			
			}
			else if(ga == gb){
				for(x=0;x<N;x++){
					if(strcmp(nb,p[x].nome)==0){
						p[x].pontos++;
						p[x].gols += gb;
					}
					else if(strcmp(na,p[x].nome)==0){
						p[x].pontos++;
						p[x].gols += ga;						
					}
				}				
			}
		}
		
		qsort(p,N,sizeof(placar),comp) ;
		for(cont = 0;cont<N;cont++){
			printf("%s\n",p[cont].nome);

		}		
		
		T--;
	}

	return 0;
}
