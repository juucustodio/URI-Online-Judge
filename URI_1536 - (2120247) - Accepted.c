#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {int time; int pontos ; int sd; int gf; int p;} Tplacar;


int comp( const void *p1, const void *p2 )
{ Tplacar *i = ( Tplacar *)p1, *j = ( Tplacar *)p2;
	

	if( i->pontos < j->pontos )
			return 1;
	else if( i->pontos == j->pontos ){
		
			if(i->sd  < j->sd)
				return 1;
			else if(i->sd == j->sd){
				if(i->gf < j->gf)
					return 1;
				else if (i->gf == j->gf){
					i->p = 1;
					j->p = 1;
					return 0;
					
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


int main () {
	Tplacar placar[2];
	int n, m, v;
	char x;

	scanf("%d",&n);
	
	while(n>0){

			for(v = 0;v < 2;v++){
			placar[v].time = 0;
			placar[v].pontos = 0; 
			placar[v].sd = 0 ;
			placar[v].gf = 0; 
			placar[v].p = 0;
			}
		placar[0].time = 1;
		placar[1].time = 2;
		
		scanf("%d %c %d", &m, &x ,&v);
		placar[0].sd += m-v;
		placar[1].sd += v-m;
		placar[1].gf += v;
		if(m>v)
			placar[0].pontos += 3;
		else if(m<v)
			placar[1].pontos += 3;
		else{
			placar[0].pontos += 1;
			placar[1].pontos += 1;
		}

		
		scanf("%d %c %d", &v ,&x ,&m);	
		placar[0].sd += m-v;
		placar[1].sd += v-m;
		placar[0].gf += m;
		if(m>v)
			placar[0].pontos += 3;
		else if(m<v)
			placar[1].pontos += 3;
		else{
			placar[0].pontos += 1;
			placar[1].pontos += 1;
		}
		
		qsort(placar,2,sizeof(Tplacar),comp);
		
		if(placar[0].p == 1)
			printf("Penaltis\n");
		else
			printf("Time %d\n",placar[0].time);
		
		n--;

	}


return 0;
}