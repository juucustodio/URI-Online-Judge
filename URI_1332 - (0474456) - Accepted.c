#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
 
int main (){
	char vetor[6];
	int T,cont,qtd;
	scanf("%d",&T);

	while (T>0){
	
	scanf("%s",vetor);
	qtd = strlen(vetor);
	
	if (qtd==5)
		printf("3\n");
	else
		if (( vetor[0] == 'o' && vetor[2] =='e')||
			(vetor[1]=='n'&& vetor[2]=='e')
			||(vetor[0]=='o'&&vetor[1]=='n'))
				printf("1\n");
		else
		printf("2\n");
	
	
	
	
	T = T-1;
	}

return 0;
}