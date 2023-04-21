#include<stdio.h>

int main(){

	int i,j,space;
	int num;
	
	puts("Enter the number:");
	scanf("%d",&num);

	for( i=1 ;i <= num ; i++){

		for( space=1 ; space<=num-i ; space++){
		
			printf(" ");
		}
		for( j=1 ; j<=i ;j++){
		
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
