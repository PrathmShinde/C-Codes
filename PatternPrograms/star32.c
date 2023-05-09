/*   Cpp lecture codes
 *    
 *           1
 *         1 2
 *       1 2 3
 *     1 2 3 4 
 *
 */
#include<stdio.h>

int main(){
	  
	for(int olc = 1; olc <= 4; olc++){
		 
       		for(int space= 1; space<=4-olc; space++){

			printf(" ");

		}
		for(int ilc= 1; ilc<= olc; ilc++){

			printf("%d",ilc);
		}
	
	printf("\n");
      }
}
