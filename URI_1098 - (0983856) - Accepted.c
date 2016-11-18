#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {

	int i=0,j=1,ia=0,ja=0;
	while(j<4){
		printf("I=0 J=%d\n",j);
		j++;
	}
	i=0;
	j=1;
	ja=2;
	while(ja<9){
		printf("I=0.%d J=1.%d\n",ja,ja);
		printf("I=0.%d J=2.%d\n",ja,ja);
		printf("I=0.%d J=3.%d\n",ja,ja);
		ja = ja+2;
	}
	
	j=2;
	while(j<=4){
		printf("I=1 J=%d\n",j);
		j++;
	}
		ja=2;
	while(ja<9){
		printf("I=1.%d J=2.%d\n",ja,ja);
		printf("I=1.%d J=3.%d\n",ja,ja);
		printf("I=1.%d J=4.%d\n",ja,ja);
		ja = ja+2;
	}
	j=3;
	while(j<6){
		printf("I=2 J=%d\n",j);
		j++;
	}

return 0;
}