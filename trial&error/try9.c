
#include<stdio.h>

int main(){

          char ch='<';

	  switch(ch){


    case '>': {
		      int a=5;
		      int b=0;
             switch(a&&b){
             case 0  : printf("false\n");
  		       break;
             case 1  : printf("true\n");
                       break;
             default : printf("default 1\n");

	  }
	      }
	  
     break;
         
	  
case '<' :{

	  int p=5;
	  int q=0;
          
	  switch(p||q){

	  case 0 : printf( "false\n");
		   break;
	  case 1 : printf( "true\n");
		   break;

	  default: printf(" default 2\n");



	  }
  }
	  }

}
