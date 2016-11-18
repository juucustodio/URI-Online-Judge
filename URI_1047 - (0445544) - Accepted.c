#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
  int TM,TH,HC,MC,HF,MF,Total,T,X;
  
  scanf ("%i %i %i %i",&HC,&MC,&HF,&MF);  
 
  if (HC < HF){
  T = HC*60 + MC;
  X = HF * 60 + MF;
  Total = X-T;
  TH = Total / 60;
  TM = Total % 60;
  }
  else{
    T = (24*60) - (HC*60+MC);   
    Total = T+(HF*60+MF);
    TH = Total/60;
    TM = Total%60;   
       }
  printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",TH,TM);  
   
  return 0;  
    }
