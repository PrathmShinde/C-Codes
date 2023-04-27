/*
       1
     1 2
   1 2 3 
 1 2 3 4  

 */

#include<stdio.h>

int main(){

	for( int i=1 ; i<=4 ; i++){

		for(int space=1 ; space<=4-i ; space++){

			printf(" ");
		}
		for(int j=1 ; j<=1*i ; j++){


			printf("%d",j);
		}
	          printf("\n");
	}
}
