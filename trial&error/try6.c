// switch statement

#include<stdio.h>

int main(){
           char a;   
           int x=10;
           int y=20;

	  printf("Enter symbol\n");
	  scanf("%c",&a);
  
    switch(a){

    case '+': printf("%d\n",x+y);	break;    
    case '-': printf("%d\n",x-y);	break;    
    case '*': printf("%d\n",x*y);	break;    
    case '/': printf("%d\n",x/y);	break;    
   
    default : printf("In Default\n");      
	     
    }

}
