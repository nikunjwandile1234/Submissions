#include<stdio.h>

void main()
{
    int no=12345;
    int lastdigit=no%10;
    


  
   // lastdigit code 
    while(no>10)
    {
        no=no/10;
    }
    int firstdigit=no;
    int sum=lastdigit+firstdigit;
    printf("%d(%d+%d)",sum,firstdigit,lastdigit);


}