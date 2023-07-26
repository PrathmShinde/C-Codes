#include<stdio.h>

int main() {

    int a = 0 ;

    if((++a) - (a--))
        printf("%d true\n",a);
    else
        printf("%d false\n",a);
}
