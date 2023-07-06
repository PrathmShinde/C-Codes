

#include<stdio.h>

int main(){

	int x=10, y=100%90; // y=10

	for(int i=1;i<=10;i++);{ // cause of ; for loop is a null statement

		if(x!=y);        // null statement (;)
		printf("x= %d y= %d\n",x,y);
	}
}
