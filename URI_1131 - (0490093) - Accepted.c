#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
	int N=0,GI,GG,grenais=0,VI=0,VG=0,empates=0;
	
	do {
		scanf("%d %d",&GI,&GG);
		if (GI>GG)
		VI = VI +1;
		if (GI<GG)
		VG = VG +1;	
		if (GI == GG)
		empates = empates+1;
		
		
		grenais = grenais+1;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&N);
	}while(N!=2);
	printf("%d grenais\n",grenais);
	printf("Inter:%d\n",VI);
	printf("Gremio:%d\n",VG);
	printf("Empates:%d\n",empates);
	if (VI>VG)
		printf("Inter venceu mais\n");
	if (VI<VG)
		printf("Gremio venceu mais\n");		
	if (VI==VG)
		printf("Nao houve vencedor\n");
		
	return 0;
}