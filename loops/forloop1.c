

#include<stdio.h>

int main(){

	int i,num;

        for(i=1;i<=10;i++){

        printf("\n");
		
	printf("Enter only even num \n");
	printf("If you enterd odd value then program will terminate directly cause of break statement. \n");

	printf("\n");

	scanf("%d",&num);

	if(num % 2 == 0)
		printf(" number is divisible by 2\n");
	else
		break;
	
	}
}
