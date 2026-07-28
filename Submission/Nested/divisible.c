#include<stdio.h>

void main()
{

    int A;
    printf("Enter the Number");
    scanf("%d",&A);


    if(A%3==0 && A%5==0)
    {
        printf("The Number is Divisible By Both");
    }
    else if (A%3==0 && A%5!=0)
    {
        printf("Divisible by 3 but not by 5");
    }
      else if (A%5==0 && A%3!=0)
    {
        printf("Divisible by 5 but not by 3");
    }
    else{

        printf("the number is not divisible both");
    }
}