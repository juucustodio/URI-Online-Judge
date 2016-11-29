#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {

	long long int x,a;

	scanf("%lld",&x);
	a = x-1;
	while(a>=1){
		x = x*a;
		a = a-1;
	} 
	printf("%lld\n",x);


return 0;
}