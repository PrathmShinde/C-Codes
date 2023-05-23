// get range from user and print their addition


#include<stdio.h>

int main() {

	int num;

           printf("Enter array size\n");
	   scanf("%d",&num);

	   int sum[num],add;

	   printf("Enter %d numbers for addition\n",num);

	      for(int i=0; i<num; i++) {

		  scanf("%d",&sum[i]);
	   }

	   printf("Sum of above %d numbers is\n",num);

	      for(int i=0; i<num; i++) {

		    add=add+sum[i];
	    }
	    printf("%d\n",add);
}
