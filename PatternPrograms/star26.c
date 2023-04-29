/*      A B C D E
 *      F G H I 
 *      J K L
 *      M N 
 *      O
 *
 */

#include<stdio.h>

int main(){

        char ch='A';

	for(int olc=1;olc<=5;olc++){

		for(int ilc=5;ilc>olc;ilc--){

			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}

