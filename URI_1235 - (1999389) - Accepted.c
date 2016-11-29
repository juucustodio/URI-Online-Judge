#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void LimpaBuffer()
{ while(getchar()!='\n');
		return;
}

int main () {
	
	char texto[102];
	int n,c,metade=0;
	
	scanf("%d",&n);
	LimpaBuffer();
	
	while(n>0){
		
		fgets(texto,102, stdin);
		for( c=0; texto[c] >= ' ' || texto[c] == '\t'; c++ );
			texto[c]= '\0';		
		
		metade = strlen(texto)/2;
		
		for(c = metade-1;c>=0;c--)
			printf("%c",texto[c]);
		for(c = strlen(texto)-1;c>=metade;c--)
			printf("%c",texto[c]);
		printf("\n");
		n--;
	}
	
	
	return 0;
}