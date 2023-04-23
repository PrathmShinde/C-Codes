#include<stdio.h>

int main(){

	int i, j;
	int space;

	for (int i=1 ; i<=10 ; i++){

		for(int space=1 ; space<=i ; space++){

			printf(" ");
		}
		for(int j=1 ; j<=10 ; j++){

			printf("*");
		}
		printf("\n");
	}
       return 0;
}
