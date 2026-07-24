#include<stdio.h>

int main()
{
    int number = 123;

    int lastdigit1 = number % 10;
    int number2 = number / 10;
    int lastdigit2 = number2 % 10;
    int number3 = number2 / 10;


    int revnumber = lastdigit1 * 100 + lastdigit2 * 10 + number3;

   if(number==revnumber)
   {
    printf("its a palindrome number");
   }
   else{
    printf("its not a palindrome number");
   }

    return 0;
}