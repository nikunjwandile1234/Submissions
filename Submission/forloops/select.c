#include <stdio.h>

int main()
{
    int n;
    int ch;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("\nEnter the Choice:\n");
    printf("1. To check number is even or odd.\n");
    printf("2. To check number is prime or not.\n");
    printf("3. To check number is palindrome or not.\n");
    printf("4. To check number is positive, negative or zero.\n");
    printf("5. To reverse a number.\n");
    printf("6. To find sum of digits.\n");

    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        if (n % 2 == 0)
        {
            printf("It's an even number");
        }
        else
        {
            printf("It's an odd number");
        }

        break;
    }

    case 2:
    {
        int i = 2;
        int status = 0;

        if (n <= 1)
        {
            status = 1;
        }

        while (i < n)
        {
            if (n % i == 0)
            {
                status = 1;
                break;
            }

            i++;
        }

        if (status == 0)
        {
            printf("The number is prime");
        }
        else
        {
            printf("The number is not prime");
        }

        break;
    }

    case 3:
    {
        int check = n;
        int reverse = 0;

        while (n > 0)
        {
            int last_digit = n % 10;

            reverse = reverse * 10 + last_digit;

            n = n / 10;
        }

        if (reverse == check)
        {
            printf("It's a palindrome number");
        }
        else
        {
            printf("It's not a palindrome");
        }

        break;
    }

    case 4:
    {
        if (n > 0)
        {
            printf("It is a positive number");
        }
        else if (n < 0)
        {
            printf("It is a negative number");
        }
        else
        {
            printf("It is zero");
        }

        break;
    }

    case 5:
    {
        int reverse = 0;

        while (n > 0)
        {
            int last_digit = n % 10;

            reverse = reverse * 10 + last_digit;

            n = n / 10;
        }

        printf("Reverse = %d", reverse);

        break;
    }

    case 6:
    {
        int sum = 0;

        while (n > 0)
        {
            int rem = n % 10;

            sum = sum + rem;

            n = n / 10;
        }

        printf("Sum of digits = %d", sum);

        break;
    }

    default:
        printf("Invalid choice");
        break;
    }

    return 0;
}