/*        D
        D C
      D C B
    A B C D

*/

#include<iostream>

int main(){

              int i,j,space;

               for(i=1;i<=4;i++){
                        for(space=1;space<=4-i;space++){
                               printf(" ");
                            }

                              for(j=68;j>=69-i;j--){
                                printf("%c",j);
                    }

                        printf("\n");
        }
}

