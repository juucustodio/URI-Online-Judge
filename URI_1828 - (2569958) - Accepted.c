#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 	int T,A = 1;
	char sheldon[10] ;
	char raj[10];
     
    scanf("%d",&T);
 
    while(T >= A){
	scanf("%s",sheldon);
	scanf("%s",raj);

	if(strcmp(sheldon,raj) == 0){
		printf("Caso #%d: De novo!\n",A);
	}	
	else if(sheldon[0] == 't' && (raj[0] == 'p' && raj[1] == 'a')){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if(raj[0] == 't' && (sheldon[0] == 'p' && sheldon[1] == 'a')){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if((sheldon[0] == 'p' && sheldon[1] == 'a')&&(raj[0] == 'p' && raj[1] == 'e')){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if((raj[0] == 'p' && raj[1] == 'a')&&(sheldon[0] == 'p' && sheldon[1] == 'e')){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if((sheldon[0] == 'p' && sheldon[1] == 'e') && raj[0] == 'l'){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if((raj[0] == 'p' && raj[1] == 'e') && sheldon[0] == 'l'){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if(sheldon[0] == 'l' && raj[0] == 'S'){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if(sheldon[0] == 'S' && raj[0] == 'l'){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if(sheldon[0] == 'S' && raj[0] == 't'){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if(sheldon[0] == 't' && raj[0] == 'S'){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if(sheldon[0] == 't' && raj[0] == 'l'){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if(sheldon[0] == 'l' && raj[0] == 't'){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if(sheldon[0] == 'l' && (raj[0] == 'p' && raj[1] == 'a')){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if(raj[0] == 'l' && (sheldon[0] == 'p' && sheldon[1] == 'a')){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if((sheldon[0] == 'p' && sheldon[1] == 'a') && raj[0] == 'S' ){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if((raj[0] == 'p' && raj[1] == 'a') && sheldon[0] == 'S'){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if((sheldon[0] == 'p' && sheldon[1] == 'e') && raj[0] == 'S' ){
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
	else if((raj[0] == 'p' && raj[1] == 'e') && sheldon[0] == 'S'){
		
		printf("Caso #%d: Bazinga!\n",A);
	}		
	
	else if((sheldon[0] == 'p' && sheldon[1] == 'e') && raj[0] == 't' ){
		printf("Caso #%d: Bazinga!\n",A);
	}
	else if((raj[0] == 'p' && raj[1] == 'e') && sheldon[0] == 't'){
		
		printf("Caso #%d: Raj trapaceou!\n",A);
	}
        A++;
    }
    
  return 0;
}