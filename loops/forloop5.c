// check and printf whether the number is divisible by 2 or not

/*
#include<stdio.h>
int main(){

	int i;

	for(i=1;i<=50;i++){
		if(i%5==0)
			printf("%d is Divisible by 5\n",i);
		else
			printf("%d is Not divisible by 5\n",i);
	}
	return 0;
}
*/

#include<stdio.h>

int main(){

	int i;

	for(i=1;i<=50;i++){
		if(i%5==0){
			printf("%d\n",i);
		}
	}
}
