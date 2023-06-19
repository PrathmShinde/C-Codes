#include <stdio.h> 

int main(){

int a=5, b=10;

     if(a>b,a<b)
	     printf("if condition executes");
     else
	     printf("else condition executes");
     return 0;
}


/*
 * Here, Ther priority of () round bracket is high,So in () there is no matter what the 1st condition {a>b} play a roll.
 * because of comma operator,the control will go to the next expression i.e {a<b}
 * and print statement " if condition executes".
 * 
 */

//In the above program if condition checks only the right most codition as comma operator sperates two conditions.
