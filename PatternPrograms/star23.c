/*
        4
       43
      432
     4321
 */

#include<stdio.h>

int main(){


	for( int i=1 ; i<=4 ; i++){

		for(int space=1 ; space<=4-i ; space++){

			printf(" ");
		}
		for(int j=4 ; j>=5-i ; j--){

			printf("%d",j);
		}
	          printf("\n");
	}
}
