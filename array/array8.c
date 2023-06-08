#include<stdio.h>

void float1();
void integer();
void character(); 
void float2();

int main() {

        int num[5] = {11,12,13,14,15};
	
	printf("%d\n",num[0]);
	printf("%d\n",num[1]);
	printf("%d\n",num[2]);
	printf("%d\n",num[3]);
	printf("%d\n",num[4]);
        printf("\n");
	integer();

	return 0;
}

void integer() {

	int num[5] = {'a','b','c','d','e'};

	printf("%d\n",num[0]);
	printf("%d\n",num[1]);
	printf("%d\n",num[2]);
	printf("%d\n",num[3]);
	printf("%d\n",num[4]);
        printf("\n");
	float1();
}

void float1() { 

 	int num[5] = {'a','b','c','d','e'};

	printf("%d\n",num[0]);
	printf("%d\n",num[1]);
	printf("%d\n",num[2]);
	printf("%d\n",num[3]);
	printf("%d\n",num[4]);
        printf("\n");

	printf("%c\n",num[0]);
	printf("%c\n",num[1]);
	printf("%c\n",num[2]);
	printf("%c\n",num[3]);
	printf("%c\n",num[4]);
        printf("\n");

	printf("%f\n",num[0]);
	printf("%f\n",num[1]);
	printf("%f\n",num[2]);
	printf("%f\n",num[3]);
	printf("%f\n",num[4]);
        printf("\n");
	character();
}

void character() { 

 	int num[5] = {11,12,13,14,15};

	printf("%c\n",num[0]);
	printf("%c\n",num[1]);
	printf("%c\n",num[2]);
	printf("%c\n",num[3]);
	printf("%c\n",num[4]);
        printf("\n");
	float2();
}

void float2() {

 	int num[5] = {10.5,11.5,12.5,13.5,14.5};

	printf("%c\n",num[0]);
	printf("%c\n",num[1]);
	printf("%c\n",num[2]);
	printf("%c\n",num[3]);
	printf("%c\n",num[4]);
        printf("\n");
	
	printf("%f\n",num[0]);
	printf("%f\n",num[1]);
	printf("%f\n",num[2]);
	printf("%f\n",num[3]);
	printf("%f\n",num[4]);
        printf("\n");
}
