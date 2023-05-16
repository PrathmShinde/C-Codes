// Write a C program to print all divisors of 50.

#include<stdio.h>                                     // Heading file

int main(){                                           // Entry point function

	int i=1,n;

	printf("Enter Starting value:\n");
        scanf("%d",&n);
	printf("\n");

	for(;i<=n;i++){                              // for loop
	      	if(n%i==0)                            // if statement         
			printf("%d\n",i);
	}
     return 0;                                        // End of execution
}
