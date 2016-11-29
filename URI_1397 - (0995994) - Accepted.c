#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int n,ta,tb,a,b,y;
	scanf("%d",&n);

	while(n!=0){
		y =n;
		ta=tb=0;
		while(y>0){
			scanf("%d %d",&a,&b);
			if (a>b)
			ta++;
			if(b>a)
			tb++;
		y--;		
		}
		printf("%d %d\n",ta,tb);
		

		scanf("%d",&n);
	}



return 0;
}