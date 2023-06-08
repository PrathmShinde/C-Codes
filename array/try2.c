// get range from user and print their addition

#include<stdio.h>

int main() {

	int num;

	printf("Enter array Size\n");
	scanf("%d",&num);

	int arr[num],add;

	printf("Enter numbers to get addition\n");

	for(int i=0; i<num; i++) {

		scanf("%d",&arr[i]);
	}

	printf("Addition of above %d numbers is\n",num);

	for(int j=0; j<num; j++) {
	
		add = add+arr[j];
	}
	printf("%d\n",add);
	

}
