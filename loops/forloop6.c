//Write a C program to print a table of 3,take input from user

#include<stdio.h>

int main(){

	int i,n;                      
       
	printf("Enter Number:\n");               // get input from user
		scanf("%d",&n);

	for(i=n;i<=30;i++){                      // for loop
		if(i%3==0)             
			printf("%d\n",i);        
	}

       return 0;
}
