#include<stdio.h>

void main ()
{
    int n=200;
    for(int i=0;i<n;i++)
    {
        
        int sum=0;
        for(int j=i;j>0;j=j/10)
        {   
            int fact=1;
            int rem=j%10;
            while(rem>1)
            {
                fact=fact*rem;
                rem--;
            }
            sum=sum+fact;
        }

        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
}