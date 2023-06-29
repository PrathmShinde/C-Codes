
#include<stdio.h>

int main(){

	int   roll_num;
	char  division;
        float percent;

	printf("Enter Your Division:\n");
        scanf("%c",&division);
 
	printf("Enter Your Roll Number:\n");
        scanf("%d",&roll_num);

        printf("Enter Your Percentage:\n");
        scanf("%f",&percent);
	
	printf("\n");
                  
        printf("Division:%c\n",division);
        printf("Roll Number:%d\n",roll_num);
        printf("Percentage:%.2f %\n",percent);


}
