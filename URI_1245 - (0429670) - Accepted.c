
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{	int esq[61], dir[61], qtPares, N, M, cont;
	char L;

	while( scanf( "%d", &N ) != EOF )
	{	for( cont=0; cont<61; cont++ )
		{	esq[cont] = 0;
			dir[cont] = 0;
		}
	
		for( cont=0; cont<N; cont++ )
		{	scanf( "%d %c", &M, &L );
	
			if( L == 'D' )
				dir[M] = dir[M] + 1;
			else
				esq[M] = esq[M] + 1;
		}
	
		qtPares = 0;
		for( cont=0; cont<61; cont++ )
			if( dir[cont] < esq[cont] )
				qtPares = qtPares + dir[cont];
			else
				qtPares = qtPares + esq[cont];
	
		printf( "%d\n", qtPares );
	}	
	
	return 0;
}
