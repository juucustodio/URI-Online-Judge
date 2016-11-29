#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int a,b,x1,x2,y1,y2;

	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	while (x1 !=0 || y1 != 0 || x2 != 0 || y2 != 0){
		a = x1-x2;
		b = y1-y2;
		a = abs(a);
		b = abs(b);
		if(x1 == x2 && y1 == y2){
			printf("0\n");
		}
		else if((x1 == x2 && y1 != y2)||(x1 != x2 && y1 == y2)||(a == b)){
		printf("1\n");
			}
		else
			printf("2\n");

		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	}


return 0;
}