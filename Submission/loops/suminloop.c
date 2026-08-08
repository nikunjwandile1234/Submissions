#include<stdio.h>


void main()
{
    int no=54372;
    int r1;
    int sum=0;
    int copy=no;

    while(no>0)
    {
        r1=no%10;
        sum=sum+r1;
        no=no/10;
    }
    printf("Completed");
    printf("The sum of every digit in  %d is equal to %d",copy,sum);
}