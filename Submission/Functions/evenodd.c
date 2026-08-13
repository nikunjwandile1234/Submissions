#include<stdio.h>
int evenodd()
{
    int no=6;
    if(no%2==0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
       int res=evenodd();
       if(res==1)
       {
        printf("its even no");
       }
       else
       {
        printf("its an odd number");
       }
}