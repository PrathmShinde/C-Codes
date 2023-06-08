#include<stdio.h>

void  main() {

	int num;

	printf("Enter array size\n");
	scanf("%d",&num);

	int arr[num];

	for(int i=0; i<num; i++){
		scanf("%d",&arr[i]);		
	}
	printf("Numbers are\n");

	for(int j=0; j<num; j++){

		printf("%d\n",arr[j]);
	}

};
