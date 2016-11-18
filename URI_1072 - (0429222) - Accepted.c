#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
  int in,out,N,N1,cont;
  scanf("%i",&N);
  in = 0;
  out = 0;
  for (cont = 0;cont<N;cont=cont+1)
  {
      scanf("%i",&N1);
      if (N1 >= 10 && N1<=20)
         in = in +1;
      else
          out = out +1;   
      
      
      }
    printf("%i in\n%i out\n",in,out);

  return 0;  
    }
    
    
    
