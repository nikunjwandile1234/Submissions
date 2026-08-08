#include<stdio.h>
 void main()
 {
    int no=6;
    int i=1;
    int sum=0;

    while(i<=no/2)
    {
        if(no%i==0)
        {
            sum=sum+i;
           
        }
        i++;
    }
    if(sum==no)
    {
        printf("its a perfect no");
    }
    else{
        printf("its not a perfect no");
    }
 }