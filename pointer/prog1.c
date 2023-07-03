

#include<stdio.h>

int main() {

	int a = 10;

	int *ptr=&a;
	int *pr=NULL;

//	printf("%d\n",*pr);
	printf("%d\n",a);
	printf("%d\n",*ptr);
	printf("%p\n",&a);
	printf("%p\n",ptr);

}
