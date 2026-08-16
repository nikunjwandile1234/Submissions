#include <stdio.h>


int fun1(int);
char fun2(int, int, char);
void fun3(char, int);

int main()
{
    int a = 10;

    int x = fun1(a);

    char ch = fun2(x, 20, 'C');

    fun3(fun2(x, 20, 'C'), 10);

    return 0;
}


int fun1(int a)
{
    return a * 2;
}

char fun2(int x, int y, char ch)
{
    printf("x = %d, y = %d\n", x, y);
    return ch;
}


void fun3(char ch, int n)
{
    printf("Character = %c\n", ch);
    printf("Number = %d\n", n);
}