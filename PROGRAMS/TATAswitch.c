#include<stdio.h>

int main(){

  printf("Welcome to Car City\n");
  printf("please select your brand  from the following list\n");
  printf("1) TATA\n");
  printf("2) TOYOTA\n");
  printf("3) BMW\n");
  printf("4) AUDI\n");
  printf("5) MERCEDES\n");

   int num;
   scanf("%d",&num);

 switch (num) {
      
    case 1: 
         printf("Please select your model of TATA brand:\n");
         printf("1) TATA NEXON\n");
         printf("2) TATA SAFARI\n");
	 
     
        int a;
        scanf("%d",&a);
        
        switch (a) {
        
    case 1:
      printf("You Select TATA NEXON\n\n");
      printf("Now plz select colour for your TATA NEXON\n");
      printf("1) White\n");
      printf("2) Black\n");
      printf("3) Red\n");
      printf("4) Gray\n");
    
    scanf("%d",&a);
        
      switch (a) {
     
    case 1: 
           printf("You Select white colour for your TATA NEXON\n");
           break;
    case 2: 
           printf("You Select Black colour for your TATA NEXON\n");
           break;
    case 3: 
           printf("You Select Red colour for your TATA NEXON\n");
           break;
    case 4:
           printf("You Select Gray colour for your TATA NEXON\n ");
           break;
   default: 
           printf("You entered wrong choice\n");
           break;
      } 
    
    case 2: 
      printf("You Select TATA SAFARI\n\n");
      printf("Now plz select colour for your TATA SAFARI\n");
      printf("1) White\n");
      printf("2) Black\n");
      printf("3) Red\n");
      printf("4) Gray\n");
    
      scanf("%d",&a);
    
    switch (a) {
    
    case 1: 
           printf("You Select white colour for your TATA SAFARI🤍    \n");
           break;
    case 2: 
           printf("You Select Black colour for your TATA SAFARI🖤\n");
           break;
    case 3: 
           printf("You Select Red colour for your TATA SAFARI❤️\n");
           break;
    case 4:
           printf("You Select Gray colour for your TATA SAFARI🤎\n ");
           break;
   default: 
           printf("You entered wrong choice\n");
           break;
    }
    }
   }
}
