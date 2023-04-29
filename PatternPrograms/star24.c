/*
        4
       34
      234
     1234
 */

#include<stdio.h>

int main(){

	for(int i=1 ; i<=4 ; i++){

		for(int j=1 ; j<=4 ; j++){
			
			if( j<=4-i )

			     printf(" ");
			else
	                     printf("%d",j);
		}
	          printf("\n");
	}
}
