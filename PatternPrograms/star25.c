/*
        4            D
       34           CD
      234          BCD
     1234         ABCD
 */

#include<stdio.h>

int main(){

	int i,j;

	for(i=1;i<=4;i++){
		for(j=65;j<=68;j++){
			
			if(j<68)
			     printf(" ");
			else
	                     printf("%c",j);
		}
	          printf("\n");
	}
}
