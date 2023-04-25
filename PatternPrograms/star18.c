#include<stdio.h>

int main(){


	for(int i=1 ; i<=4 ; i++){

		int temp=1;

		for(int space=1 ; space<=4-i ; space++){

			printf(" ");
		}
		for(int j=1 ; j<=i*2-1 ; j++){
			
			printf("%d",temp);

			if( j<i )
				temp++;
			else
				temp--;
		}
		printf("\n");
	}
}
