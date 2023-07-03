#include<stdio.h>

int main() {

	char ch ='A'; 
	int val = 20;
	float x = 20.5;
	double d= 50;


	char   *cptr = &ch;
	int    *iptr = &val;
	float  *fptr = &x;
	double *dptr = &d;
	
	printf("%ld\n",sizeof(ch));
	printf("%ld\n",sizeof(int));
	printf("%ld\n",sizeof(float));
	printf("%ld\n",sizeof(double));

	printf("\n");
	
	printf("%ld\n",sizeof(cptr));
	printf("%ld\n",sizeof(iptr));
	printf("%ld\n",sizeof(fptr));
	printf("%ld\n",sizeof(dptr));



}

