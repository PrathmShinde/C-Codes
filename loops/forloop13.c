// Write a program to print alphabets in reverse order between y to j 


#include<stdio.h>                               // Header file

int main(){                                     // Entry point function
	
	char a;
        char b;

	printf("Enter 1st Character:\n");        
	 scanf("%c",&a);                         // using scanf we get 1st character

	printf("Enter 2nd Character:\n");
	 scanf(" %c",&b);                        // using scanf we get 2nd character
        
	printf("\n");

        for(a;a>=b;a--){                         // for loop
		printf("%c\n",a);                
	}
    return 0;
}                                               // End of program
