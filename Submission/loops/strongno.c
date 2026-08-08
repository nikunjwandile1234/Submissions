#include<stdio.h>

void main(){
  
    int no=145;
    int temp=no;
    int sum=0;

    while(no>0)
    {
        int fact=1;
        int rem=no%10;
        while(rem>1)
        {
            fact=fact*rem;
            rem--;
        }
        sum=sum+fact;
        no=no/10;
    }
    if(sum==temp)
    {
        printf("its an strong no");
    }
    else
    {
        printf("its not a strong no");
    }

}