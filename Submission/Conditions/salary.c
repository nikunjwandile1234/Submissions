#include<stdio.h>

void main()
{
    int salary = 4000;
    int ta = 0;
    int da = 0;
    int hra = 0;
    int total = 0;

    if(salary <= 5000)
    {
        ta = 10;
        da = 20;
        hra = 25;
    }
    else
    {
        ta = 15;
        da = 25;
        hra = 30;
    }

    total = (ta * salary / 100) +
            (da * salary / 100) +
            (hra * salary / 100) +
            salary;

    printf("The total salary of the employee is %d", total);
}