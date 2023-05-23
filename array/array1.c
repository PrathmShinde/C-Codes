// get array size and values from user and printf values


#include<stdio.h>

int main() {

	int num;
//	int i;

	printf("Enter array size\n");
	    scanf("%d",&num);

	    int sp[num];

	    printf("Enter numbers:\n");

	       for(int i=0 ; i<num; i++) {
		    scanf("%d",&sp[i]);
	    }

	    printf("Values that you are entered\n");

	       for(int j=0; j<num; j++) {

		    printf("%d\n",sp[j]);
	       }
}
