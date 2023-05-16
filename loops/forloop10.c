// Write a C program to print all the ASCII values of numbers 1 to 128.


#include<stdio.h>                         // Header file

int main(){                               // Entry point function

	int i,n;

	printf("Enter a number:\n");
	scanf("%d%d",&i,&n);
        printf("\n");                     
 
      	for(i;i<=n;i++)                   // For loop
              printf("%c = %d\n",i,i);
      
	return 0;                         // End of program
}
