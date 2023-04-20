
#include<stdio.h>
int main(){

	int i,j,space;
        int rows=5;
	for(i=1;i<=rows;i++){
		for(space=1;space<=rows-i; space++){
			printf(" ");
		}
		 	  for(j=1;j<=i;j++){
			 //	printf("* ");
			 //	printf("\U0001F61B"); 
			 	printf("\U0001F595"); 

                    }
	
                   printf("\n");
	}
         
		return 0;
}

/*
  
output:
 
    *
   * *
  * * *
 * * * *
* * * * *
*
*/
