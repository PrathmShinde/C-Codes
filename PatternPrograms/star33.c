/*   Cpp lecture codes
 *    
 *           A
 *         A B
 *       A B C
 *     A B C D 
 *
 */
#include<stdio.h>

int main(){
	  
	for(int olc = 1; olc <= 4; olc++){
		 
         	char ch='A';
	
		for(int space= 1; space<=4-olc; space++){

			printf(" ");

		}
		for(int ilc= 1; ilc<= olc; ilc++){

			printf("%c",ch);
			ch++;
		}
	
	printf("\n");
      }
}
