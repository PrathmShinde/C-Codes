
#include<stdio.h>

int main(){

	int i;

	for(i=1;i<=5; printf("%d\n",i));  // because of null statement for loop go into the infinite statement 
	i++;	                          // Unreachable statement cause of abobe null statement
//	printf("%d\n",i);
}
 
/*	for(i=1;i<=5;){
	    
	    i++;
	    printf("%d\n",i);
	}
*/
