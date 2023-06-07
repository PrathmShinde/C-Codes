// #interesting fact of array
// #address of array variable and index 0 are same 


#include<stdio.h>

int main() {

	int arr[2] = {1,2};

	printf("%p\n",arr);
	printf("%p\n",&arr[0]);
	
}

// Name of array itself is a address of first element
