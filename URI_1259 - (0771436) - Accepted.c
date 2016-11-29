#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int comp ( const void *p1, const void *p2 )
{ 
    int *i = (int *)p1, *j = (int *)p2;
    if( *i < *j )
        return -1;
    else
        if( *i == *j )
            return 0;
        else
            return 1;
} 

int main ()
{
	long long int n,cont,x,contp=0,conti=0;
	long long int par[100000],impar[100000];
	scanf("%lld",&n);
	
	for(cont = 0;cont<n;cont++){
		scanf("%lld",&x);
		if ((x%2)==0){
			par[contp] = x;
			contp ++;
			}
		else{
			impar[conti] = x;
			conti ++;			
			}	
		
	}
	qsort(par,contp, sizeof(long long int),comp);
	qsort(impar,conti, sizeof(long long int),comp);

	for (cont = 0;cont<contp;cont++){
		printf("%lld\n",par[cont]);
	
	}

	for (cont = conti-1;cont>=0;cont--){
		printf("%lld\n",impar[cont]);
	
	}


return 0;
}