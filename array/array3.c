

#include<stdio.h>

int main() {

       int array[10] = {[0 ... 4]=7};

	for(int i=0 ; i<10; i++) {

          printf("%d = %d\n",i,array[i]);

/*	
		int array[20] = {[0 ... 15]=7};

	for(int i=0 ; i<20; i++) {

		printf("%d = %d\n",i,array[i]);
*/
	}
}
