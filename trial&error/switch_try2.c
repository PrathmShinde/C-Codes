#include<stdio.h>

int main(){


	int x=1;

	switch(x);{                     // cause of ';' (semicolon) statement will terminated here.So error will be Occured.

		case 0 : 
			printf("Hashime Mashite\n");
			break;
		case 1: 
			printf("Ohayo Gozaimasu\n");
			break;
	}
	return 0;
}


