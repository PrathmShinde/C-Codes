#include<stdio.h>

int main(){

	int ch= 'a' + 'b';

	switch(ch){

		case 'a' : 
			         printf("Corona\n");
			         break;
	        case 'b' :
			         printf("Go Corona\n");
			         break;
		case 'a'+'b' :                  
				 printf("Go Corona Go\n");     // true
				 break;

			 }
	return 0;
}

