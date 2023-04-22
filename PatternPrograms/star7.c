#include<stdio.h>

int main(){
	
int i,j;
        int space;

        for(i=0;i<=5;i++){
                for(space=0;space<i;space++){
                        printf(" ");
                }
                for(j=5;j>=i;j--){
                     // printf("*");
                        printf("\U0001F56F");
                }
                printf("\n");
	}        
         for(i=1;i<=5;i++){
                for(space=0;space<5-i;space++){
                        printf(" ");
                }
                for(j=1;j<=i+1;j++){
                     // printf("*");
                        printf("\U0001F56F");
                }
                printf("\n");
        }
	
}
