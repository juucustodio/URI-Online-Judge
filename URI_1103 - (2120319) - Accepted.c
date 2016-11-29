#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main () {
	int h1, h2, m1 , m2, tm;
	
	scanf("%d %d %d %d", &h1,&m1,&h2,&m2);
	
	while(h1 != 0 || h1 != m1 || h1 != m2 || h1 != h2){
		
		if((h2 < h1) || (h2 == h1 && m1 > m2))
			tm = ((((24-h1)+h2)*60)+m2)-m1;
		else
			tm = (((h2-h1)*60)+m2)-m1;
		
		printf("%d\n",tm);
		
	scanf("%d %d %d %d", &h1,&m1,&h2,&m2);		
	}
	
	
	return 0;
}
