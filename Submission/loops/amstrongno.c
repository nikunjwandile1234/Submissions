#include<stdio.h>

void main()
{
    int no=371;
    int temp=no;
    int check=no;
    int sum=0;
    //raisingcode
    
     int digit=0;
     while(no>0)
     {
       no=no/10;
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
     if(sum==check)
     {
        printf("its an amstrong no");
     }
     else{
        printf("its not an amstrong no");
     }



    

}