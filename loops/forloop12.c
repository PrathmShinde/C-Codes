// Write a program to print multiples of 6 upto 60


#include<stdio.h>                      // header file
 
int main(){                            // Entry point function

	int i,n;

	printf("Enter a number:\n");
	 scanf("%d",&i);

        printf("Enter limit:\n");
         scanf("%d",&n);
         
	printf("\n");

	for(i;i<=n;i++){                   // For loop
		if(i%6==0)                 // if statement
			printf("%d\n",i);
	}
    return 0;
 }                                         // End of program
