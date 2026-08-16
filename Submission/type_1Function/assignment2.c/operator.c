#include<stdio.h>

void operator();
void main()
{
    operator();
}

void operator()
{
     int a, b;
    char operator;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    if(operator == '+')
    {
        printf("The addition is %d", a + b);
    }
    else if(operator == '-')
    {
        printf("The subtraction is %d", a - b);
    }
    else if(operator == '*')
    {
        printf("The multiplication is %d", a * b);
    }
    else if(operator == '/')
    {
        if(b != 0)
            printf("The division is %d", a / b);
        else
            printf("Division by zero is not possible.");
    }
    else if(operator == '%')
    {
        if(b != 0)
            printf("The remainder is %d", a % b);
        else
            printf("Division by zero is not possible.");
    }
    else
    {
        printf("Invalid operator!");
    }
}