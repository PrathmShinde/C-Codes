// array size

#include<stdio.h>

int main() {

	int iarray[5] = {10,20,30,40,50};
            
	printf("%ld\n",sizeof(iarray));

	char carray[2+3] = {'A','B','C'};

	printf("%ld\n",sizeof(carray));

	for(int i=0; i<5; i++ ) {

		printf("%c\n",carray[i]);
	}
}	
