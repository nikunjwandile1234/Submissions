#include<stdio.h>

void main ()
{
    int n=200;
    for(int i=1;i<n;i++)
    {
        int status=0;
        for( int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                status=1;
            }
        }
        if(status==0)
        {
            printf("%d \n",i);
        }
    }

}