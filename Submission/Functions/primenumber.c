
#include<stdio.h>

int prime()
{
    int no=13;
    for(int i=2;i<no;i++)
    {
        int status=0;
        if(no%i==0)
        {
           status=1;
           return status;
        }
        else
        {
            return status;
        }
    }
}

void main()
{
     int status=prime();

     if(status==0)
     {
        printf("the numbe is prime");
     }
     else
     {
        printf("the number is not prime");
     }
}