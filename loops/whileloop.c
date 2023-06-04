#include<stdio.h>

int main(){

	int i;
	int sum=0;
	int a;


       printf("Enter last number :\n");
       scanf("%d",&a);
       printf("Enter 1st number :\n");
       scanf("%d",&i);
        
       while(i<=a){

		sum=sum+i;
		i++;
           
       }
       printf("Total: %d\n",sum);
       
	return 0;
}
