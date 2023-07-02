#include<stdio.h>

int prathm();
int c2w();
int main() {

	printf(" I am in main function\n");

	prathm();
	c2w();

	return 0;
}

int prathm() {

	printf(" I am in prathm\n");
	c2w();
}

int c2w() {

	printf(" I am in c2w\n");
}
