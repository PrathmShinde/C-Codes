// Get values from array and print largest value of them


#include<stdio.h>

int main() {

	int num;
	int max = 0;


	printf("Enter size of array\n");
	scanf("%d",&num);

	int larg[num];

	printf("Enter array elements\n");
		for(int i=0 ;i<num; i++) {
			scanf("%d",&larg[i]);
		}

	printf("Largest num is:\n");
		for(int i=0; i<num; i++) {
	
		if (max < larg[i])
		  	  max = larg[i];
		}
		printf("%d\n",max);
}
