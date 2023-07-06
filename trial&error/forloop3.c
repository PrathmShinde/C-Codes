
#include<stdio.h>

int main(){

	int i=1,j=1;

	for(;;){

		if(i>5)
			break;   // finally this condition will be true and break statement break the for loop.
		else
			j++;
	
		printf("j= %d\n",j);
		i++;

		printf("i= %d\n",i);
	}	
	
}
