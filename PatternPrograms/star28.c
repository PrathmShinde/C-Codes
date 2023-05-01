/*     Cpp Lecture codes
 *
 *         A  2  C 4 E
 *         A  7  C 9
 *         A  11 C
 *         A  14
 *         A
 */

#include<stdio.h>

int main(){
	 
	int count=1;

	for(int olc=1;olc<=5;olc++){

	    char ch='A';
	
    	    for(int ilc=5;ilc>=olc;ilc--){

			if(ilc==2 || ilc==4){

				printf("%d ", count);
			}else{
	         		printf("%c ",ch);
		
	         	}
		        count++;
			ch++;
         	}
	         
	         printf("\n");
       }

}
