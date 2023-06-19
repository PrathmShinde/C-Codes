
#include<stdio.h>

int main(){

	int num=0;

	for(int i=1;i<=10;i++){

		printf("Enter Even number :\n");
		scanf("%d",&num);

		if(num%2==0)
			printf("%d is even\n",num);
                   

	}
	printf("Out of for loop");
}
