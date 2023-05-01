/*     Cpp Lecture codes
 *
 *         A  2  C 4 E
 *         F  7  H 9
 *         J  11 L
 *         M  14
 *         O
 */

#include<stdio.h>

int main(){
	 
	int count=1;
	char ch='A';

	for(int olc=1;olc<=5;olc++){

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
