// Write a program to print alternative numbers in reverse order between 15 to 30 ( without using if )


#include<stdio.h>

int main(){

	int i,j;

	printf("Enter 1st number:\n");
	 scanf("%d",&j);

	 printf("Enter 2nd number:\n");
	  scanf("%d",&i);

	  printf("\n");


	for(i;i>=j;i--){
		printf("%d\n",i);
		i--;
	}
}
