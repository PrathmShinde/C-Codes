// Write a C program to print characters from A to Z in upper case and in lower case



#include<stdio.h>                                     // Header file

int main(){                                           // Entry point function

	int i;
        int n=90;
	int b=97;

	printf("Enter ASCII value of 'A':\n");         
         scanf("%d",&i);                              // Using Scanf we get ASCII value of 'A'.

	printf("Enter ASCII value of 'a':\n");        
	 scanf("%d",&b);                              // Using Scanf we get ASCII value of 'a'.
	
	 for(i;i<=n;i++){                             // Here we use for loop
	      if(i<=b)                                // if statement
		printf("%c = %c\n",i,b);
	        b++;                                  // increment value of b by 1.
	}
     return 0;	 
}                                                     // End of program
