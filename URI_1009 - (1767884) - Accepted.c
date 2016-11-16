#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
  
int main()
{
 
      double S,V,Total;
      char Nome[100];
	  scanf("%s",Nome);
      scanf("%lf %lf",&S,&V);
      
      Total = (V*0.15)+S;
                
      printf("TOTAL = R$ %.2lf\n",Total);
    
	
  return 0;
}
