
#include<stdio.h>

void display();

int main() {
	
	printf("Learn C\n");
	display();

	return 0;
}
void display() {

	printf("In display\n");
	main();
}
