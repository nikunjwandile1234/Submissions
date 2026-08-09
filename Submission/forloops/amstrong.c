#include<stdio.h>

void main()
{
    int n=200;

    for(int i=1;i<=n;i++)
    {
            
     int digit=0;
     int temp=i;
     int sum=0;
     int check=i;
     while(check>0)
     {
       check=check/10;
       digit++;
     }
     int total_digits=digit;

     while(temp>0)
     { 
        int multiplication=1;
        int rem=temp%10;
        digit=total_digits;
        while(digit>0)
        {
           multiplication*=rem;
           digit--;
        }

        sum=sum+multiplication;
        temp=temp/10;

     }
     if(i==sum)
     {
        printf("%d\n",i);
     }
    }
}