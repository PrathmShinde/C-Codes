/*     Cpp Lecture codes
 
        *
	= =
	* * *
	= = = =
	* * * * *
	
*/

#include<stdio.h>

int main(){

	for(int olc = 1; olc <= 5 ; olc++){

		for(int ilc = 1; ilc <= olc ; ilc ++){

		if(olc == 2 || olc == 4){

		         printf("= ");
	           }else {
			   printf("* ");
		   }
		}
		printf("\n");

	}
}

