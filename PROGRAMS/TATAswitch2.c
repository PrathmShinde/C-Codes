#include<stdio.h>

int main() {

	char ch;
	do {
		
  int num;

  printf("Welcome to Car City\n");
  printf("please select your brand  from the following list\n");
  printf("1) TATA\n");
  printf("2) TOYOTA\n");
  printf("3) BMW\n");
  scanf("%d",&num);

 switch (num) {

    case 1:{
	    printf("TATA CARS\n\n");
	    
	    printf("SELECT YOUR TATA CAR MODEL\n");

	    printf("1) Tata Safari\n");
	    printf("2) Tata nexon\n");
	   
	    int a;

	    scanf("%d",&a);

	    switch(a) {

		    case 1 :{
			      printf("You Select Tata Safari\n\n");

			      printf("Now select color for your tat safari\n");

			      printf("1) White\n");
			      printf("2) Black\n");
			      printf("3) Blue\n");
			      printf("4) Red\n");
			      scanf("%d",&num);

			    switch(num) {

				    case 1 : 
					     printf("You Select White color for your tata Safari\n");
					     break;
				    case 2 : 
					     printf("You Select Black color for your tata Safari\n");
					     break;
				
				    case 3:  printf("You Select Blue color for your tata Safari\n");
					     break;
				    case 4 : 
					     printf("You Select Red color for your tata Safari\n");
					     break;
				    default:
					     printf("You entered wrong choice\n");
					     break;
			    }  
	                   	    break;
			    }

 		    case 2 :{
                              printf("You Select Tata Nexon\n\n");

                              printf("Now select color for your tata Nexon\n");

                              printf("1) White\n");
                              printf("2) Black\n");
                              printf("3) Blue\n");
                              printf("4) Red\n");

                              scanf("%d",&num);

                              switch(num) {

                                    case 1 :
                                             printf("You Select White color for your tata Nexon\n");
                                             break;
                                    case 2 :
                                             printf("You Select Black color for your tata Nexon\n");
                                             break;
                                    case 3:  printf("You Select Blue color for your tata Nexon\n");
                                             break;
                                    case 4:
                                             printf("You Select Red color for your tata Nexon\n");
                                             break;
                                    default:
                                             printf("You entered wrong choice\n");
                                             break;
			    }
			            break;
			 }
	   }
   
   case 2:{
	    printf("TOYOTA CARS\n\n");

            printf("SELECT YOUR TOYOTA CAR MODEL\n");

            printf("1) Fortuner\n");
            printf("2) INNOVA\n");
	    scanf("%d",&num);

            switch(num) {

                    case 1 :{
                              printf("You Select Fortuner\n\n");

                              printf("Now select color for your fortuner\n");

                              printf("1) White\n");
                              printf("2) purple\n");
                              printf("3) Blue\n");
                              printf("4) Red\n");
                              scanf("%d",&num);

                              switch(num) {
 
                                    case 1 :
                                             printf("You Select White color for your Fortuner\n");
                                             break;
                                    case 2 :
                                             printf("You Select purple color for your fortuner\n");
                                             break;

                                    case 3:  printf("You Select Blue color for your Fortuner\n");
                                             break;

				    case 4 :
                                             printf("You Select Red color for your fortuner\n");
                                             break;

				    default:
                                             printf("You entered wrong choice\n");
                                             break;
                            }
                                    break;
			    }

                   case 2 :{
                              printf("You Select INNOVA\n\n");

                              printf("Now select color for your INNOVA\n");

                              printf("1) White\n");
                              printf("2) Black\n");
                              printf("3) purple\n");
                              printf("4) Dark Red\n");

                              scanf("%d",&num);

                              switch(num) {

                                    case 1 :
                                             printf("You Select White color for your INNOVA\n");
                                             break;
                                    case 2 :
                                             printf("You Select Black color for your INNOVA\n");
                                             break;

                                    case 3:  printf("You Select purple color for your INNOVA\n");
                                             break;
                                    case 4 :
                                             printf("You Select Dark Red color for your Fortuner\n");
                                             break;

				    default:
                                             printf("You entered wrong choice\n");
                                             break;
                            }
                                    break;
			   }
	    }
	  }

    case 3: {
              printf("BMW CARS\n\n");

              printf("SELECT YOUR BMW CAR MODEL\n");

              printf("1) BMW X3\n");
              printf("2) BMW X5\n");
              scanf("%d",&num);

              switch(num) {

                    case 1 :{
                              printf("You Select BMW X3 Model\n\n");

                              printf("Now select color for your BMW X3\n");

                              printf("1) White\n");
                              printf("2) purple\n");
                              printf("3) Blue\n");
                              printf("4) Red\n");
                              scanf("%d",&num);

                              switch(num) {
 
                                    case 1 :
                                             printf("You Select White color for your BMW X3\n");
                                             break;
                                    case 2 :
                                             printf("You Select purple color for your BMW X3\n");
                                             break;

                                    case 3:  printf("You Select Blue color for your BMW X3\n");
                                             break;
                                   
				    case 4 :
                                             printf("You Select Red color for your BMW X3\n");
                                             break;

                                    default:
                                             printf("You entered wrong choice\n");
                                             break;
                            }
                                    break;
			  }
	      
                   case 2 :{
                              printf("You Select BMW X5\n\n");

                              printf("Now select color for your BMW X5\n");

                              printf("1) White\n");
                              printf("2) Black\n");
                              printf("3) purple\n");
                              printf("4) Dark Red\n");

                              scanf("%d",&num);

                              switch(num) {

                                    case 1 :
                                             printf("You Select White color for your BMW X5\n");
                                             break;
                                    case 2 :
                                             printf("You Select Black color for your BMW X5\n");
                                             break;

                                    case 3:  printf("You Select purple color for your BMW X5\n");
                                             break;
                                    case 4 :
                                             printf("You Select Dark Red color for your BMW X5\n");
                                             break;
			        
				    default:
                                             printf("You entered wrong choice\n");
                                             break;
                            }
                                    break;
                           }
	      }
	    }
	   }
	          printf("Can you ride your journey again\n");
	          printf("1) for YESss press Y or y\n");
	          printf("2) for NOoo press N or n\n");
		  scanf("%c",&ch);
	   
	        } while(ch=='Y' || ch=='y');
	   
	}	       
 }
