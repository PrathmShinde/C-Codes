#include<stdio.h>

int main(){

	int num;
		int i=1;

	while(i){

		printf("Enter num:\n");
		scanf("%d",&num);

      		if(num%4==0 && num%8==0)
			break;
		else
			printf("number:\n",num);
		
//		i++;
	}
	printf("OUT OF SAMPARK\n");

	return 0;
}


