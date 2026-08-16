#include<stdio.h>
void nonzero();
void main()
{
    nonzero();
}

void nonzero()
{
    
    int n=5;

    if(n!=0)
    {
        if(n>0)
        {
            printf("the number is positive");
        }
        else
        {
            printf("the number is negative");
        }
    }
    else{
        printf("the number is zero");
    }
}