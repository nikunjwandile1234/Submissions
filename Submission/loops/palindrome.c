#include<stdio.h>

void main()
{
    int no=121;
    int check=no;
    int reverse=0;

    while(no>0)
    {
        int last_digit=no%10;
        reverse=reverse+last_digit*10;
        no=no/10;

    }

    if(reverse==check)
    {
        printf("its an palindrome no");
    }
    else{
        printf("its not an palindrome");
    }
}