#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int n,ra,rb;

	scanf("%d",&n);

	while(n>0){
		scanf("%d %d",&ra,&rb);
		printf("%d\n",ra+rb);

	n--;
	}

return 0;
}