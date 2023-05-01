/*     Cpp Lecture codes
 *
 *         A  2  A 4 A
 *         A  7  A 9
 *         A  11 A
 *         A  14
 *         A
 */

#include<stdio.h>

int main(){
	 
	int count=1;

	for(int olc=1;olc<=5;olc++){

    	    for(int ilc=5;ilc>=olc;ilc--){

			if(ilc==2 || ilc==4){

				printf("%d  ", count);
			}else{
	         		printf("A  ");
		
	         	}
		        count++;
		
         	}
	         
	         printf("\n");
       }

}
