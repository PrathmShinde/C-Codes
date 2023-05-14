//write a C program to print odd numbers from 20 to 40 

#include<stdio.h>            // Header file

int main(){                  // Entry point function

	int i,n;             

	printf("Enter starting value And last value:\n");
        scanf("%d%d",&i,&n);
        printf("\n");
        
	for(i;i<=n;i++){                             // for loop 
		if(i % 2 != 0){                      // if statement 

			printf("%d\n",i);            
		}
	}
	return 0; 
}                             // End of program
