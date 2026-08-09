#include<stdio.h>

#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars;

        if (i <= n)
        {
            stars = i;
        }
        else
        {
            stars = 2 * n - i;
        }

        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
