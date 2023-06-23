// goto statement

#include <stdio.h>
int main()
{
int num;


     printf("enter positive or negative number\n");
      scanf("%d",&num);

      if(num>=0)

	     goto positive;
	     else
	     goto negative;

negative:{
	     printf("number is negative\n");
             return 0;

	 }   

positive:{

	     printf("number is positive\n");
	     return 0;
	 }
	 
}
