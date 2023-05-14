// Write a C program to print even numbers between 50 to 70.

#include<stdio.h>                                     // Heading file

int main(){                                           // Entry point function

	int i,n;

	printf("Enter Starting value And last value:\n");
        scanf("%d%d",&i,&n);
	printf("\n");

	for(i;i<=n;i++){                              // for loop
	      	if(i%2==0)                            // if statement         
			printf("%d\n",i);
	}
     return 0;                                        // End of execution
}
