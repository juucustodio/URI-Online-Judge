#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
  
typedef struct {int id, pontos;} Tpiloto;
  
int cmp(const void *p1, const void *p2){
    Tpiloto *i =(Tpiloto*)p1,*j=(Tpiloto*)p2;
    return j->pontos - i->pontos;
}
  
int main()
{
    Tpiloto piloto[150];
    int chegada[150][150],pontos[200];
    int g,p,s,k;
    int lin,col,i,x;
      
    while (scanf("%d %d", &g, &p) && (g || p)){
 
        for (lin = 1;lin<=g;lin++)// le a matriz de chegada
            for(col = 1;col<=p;col++)
                scanf("%d",&chegada[lin][col]);
 
        scanf("%d",&s);         
        while(s--){
            memset(pontos, 0, sizeof(int));
             
            for (i = 0;i<150;i++){ //zera a struct
                piloto[i].id = 0;
                piloto[i].pontos = 0;
            }
            scanf("%d",&k); //le a qtd de pilotos q vao ganhar score
            for(i = 1; i <= k; i++)
                scanf("%d",&pontos[i]);
 
            for (lin = 1;lin<=p;lin++) //carrega o num de pilotos
                piloto[lin].id = lin; 
                         
            for (lin = 1;lin<=g;lin++)//recebe e soma os pontos
                for(col = 1;col<=p;col++)
                    if(chegada[lin][col] <= k)
                        piloto[col].pontos += pontos[chegada[lin][col]];
 
            qsort(&piloto[1], p, sizeof(Tpiloto), cmp); //ordena a struct
 
            for(i=1; i<=p; i++){
                printf("%d",piloto[i].id);
                if (piloto[i].pontos == piloto[i+1].pontos) printf(" ");                
                else i = p+1;
            }
                printf("\n");
             
        }
    }
return 0;
}