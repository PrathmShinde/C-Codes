
#include<stdio.h>

int main(){
         
     char x;
           do{
		int choice;
		
                printf("Which operation would you like to perform:\n\n");
		printf("1) ADDITION:\n");
		printf("2) SUBSTRACTION:\n");
		printf("3) MULTIPLICATION:\n");
		printf("4) DIVISION:\n");
               
		scanf("%d",&choice);
	              
   switch(choice){   

                  case 1: {
                            puts("ADDITION");
		            int a,b,sum=0;

		            printf("Enter two numbers:\n");
	                    scanf("%d %d",&a,&b);

                            sum = a+b;
                
	                    printf("sum= %d\n",sum);
			  }
                            break;
     		    		  
                  case 2 : {
			    puts("SUBSTRACTION");
                            int a,b,sub=0;

                            printf("Enter two numbers:\n");
                            scanf("%d %d",&a,&b);

                            sub = a-b;

                            printf("sub= %d\n",sub);
                           }
			    break;

                 case 3 :  {			    
                            puts("MULTIPLICATION");
                            int a,b,mul=0;

                            printf("Enter two numbers:\n");
                            scanf("%d %d",&a,&b);

                            mul = a*b;

                            printf("mul= %d\n",mul);
                            break;
			   }
                 
		 case 4 : {
                            puts("DIVISION");
                            int a,b,div=0;

                            printf("Enter two numbers:\n");
                            scanf("%d %d",&a,&b);

                            div = a/b;

                            printf("div= %d\n",div);
                            break; 
			  }
                     }
                   printf("Would you like to perform some other operations :\n");
                   printf("1) press Y for continue :\n");
                   printf("2) Press N for Stop :\n");
                  
		   scanf(" %c",&x);

	   
     }while(x =='y' || x =='Y');



   }      


