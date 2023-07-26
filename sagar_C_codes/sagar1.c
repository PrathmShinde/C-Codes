
#include<stdio.h>


int main(){

	int x=10;
	int y=20;
	int z=(++x,++y);
       
       printf("%d %d %d\n",x,y,z);  //x=10 y=21 z=21

}
