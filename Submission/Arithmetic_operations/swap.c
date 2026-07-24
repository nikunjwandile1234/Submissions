
#include<stdio.h>

void main(){

    int a=5;
    int b=10;

    printf("Before Swapping Numbers are %d and %d\n",a,b);

    int c=a;
        a=b;
        b=c;

   printf("After Swapping Numbers are %d and %d",a,b);
}