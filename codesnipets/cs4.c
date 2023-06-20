#include <stdio.h>

int main () {

    int arr [] = {512};

    char *ptr = arr ;

    for(int s=0; s<4 ; s++)
        printf("%d \n",*(ptr+s));
}
