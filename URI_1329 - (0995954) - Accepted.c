#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int n,m,j,y,x;

	scanf("%d",&n);
	while(n > 0){
		j=0;
		m=0;
		y=1;
		while(y<=n){		
			scanf("%d ",&x);
			if(x == 0)
				m++;
			else
				j++;
			y+=1;
		}
	printf("Mary won %d times and John won %d times\n",m,j);
	scanf("%d",&n);
	}


return 0;
}