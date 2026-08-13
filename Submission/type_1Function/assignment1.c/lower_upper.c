
#include<stdio.h>
void lower_upper();
void main()
{
   lower_upper();
}

void lower_upper()
{ 
    char A='A';

    if(A>='a'&& A<='z'){

        printf("the character is lowercase");
    }
    else
    {
        printf("the character is uppercase");
    }
}