#include<stdio.h>

void main()
{
    int n=7;
    int i=2;
    int status=0;

    while(i<n)
    {
        if(n%i==0)
        {
            status=1;
        }
        i++;
    }
    if(status==0)
    {
        printf("The number is prime");
    }else
    {
        printf("the number is not prime");
    }
}