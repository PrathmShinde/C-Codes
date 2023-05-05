/*     Cpp Lecture codes
 *
 *     * * * * *
 *     * = = =
 *     * = =
 *     * =
 *     *
 */

#include<stdio.h>

int main(){

	for(int olc = 1; olc <= 5; olc++){

		for(int ilc = 5; ilc>=olc ;ilc--){

			

			if(olc==1 || ilc ==5){
				
				printf("* ");
			} else {
				printf("= ");

			}
		}
		printf("\n");
	}
}

