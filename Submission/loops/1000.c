#include<stdio.h>
void main()
{
    int i=1;
    int sum=0;
    
    // while(i<=1000)
    // {
    //    sum+=i;
    //    i++;
    // }
    // printf("The sum of numbers upto 1000 is %d",sum);

    // Even
    // while(i<=1000) 
    // {
    //     if(i%2==0)
    //      sum+=i;
    //         i++;
    // }
    //  printf("The sum of  even numbers upto 1000 is %d",sum);
    
    //  odd
    // while(i<=1000)
    // {
    //     if(i%2!=0)
    //      sum+=i;
    //       i++;
    // }
    //  printf("The sum of odd numbers upto 1000 is %d",sum);

       while(i<=1000)
    {
        if(i%3==0 &&i%5==0)
         sum+=i;
          i++;
    }
     printf("The sum of numbers divsible by 3 and 5 upto  1000 is %d",sum);

    
}