#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
  
   
int comp ( const void *p1, const void *p2 )
{ 
    int *i = (int *)p1, *j = (int *)p2;
    if( *i < *j )
        return -1;
    else
        if( *i == *j )
            return 0;
        else
            return 1;
} 
   
int main () {
    int trocas,n,q,vetor[10005],cont,aux,pesq[10005],caso=0,cc;
  
    scanf("%d %d",&n,&q);
  
    while(n != 0 || q != 0){
        caso = caso+1;
        for (cont  = 0;cont<n;cont++){
            scanf("%d",&vetor[cont]);
                              
        }
        for (cont  = 0;cont<q;cont++){
            scanf("%d",&pesq[cont]);
                              
        }
  
    qsort( vetor,n, sizeof( int ),comp) ;
  
    for (cc = 0;cc<q;cc++){      
        aux = -1;
        for (cont  = 0;cont<n;cont++){
            if (vetor[cont] == pesq[cc]){
                aux = cont+1;
                cont = n;
            }
                              
        }
        if (aux != -1){
            if (cc == 0)        
            printf("CASE# %d:\n",caso);
            printf("%d found at %d\n",pesq[cc],aux);
        }
        else
        {
            if (cc == 0)            
            printf("CASE# %d:\n",caso);
  
            printf("%d not found\n",pesq[cc]);
        }
    }   
    scanf("%d %d",&n,&q);
    } 
  
  
  
  
  
return 0;
}