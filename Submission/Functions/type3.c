#include <stdio.h>
void fun1(int, int, int, char, double, int, float);
void fun2(int ,char,char,double ,int );
void fun3(int ,int ,int,char);
void main()
{
    int a = 10;
    int b = 20;
    int c;
    char ch = 'x';
    double d = 10.5;
    printf("function1\n");
    fun1(a, b, c, ch, d, 10, 20.3);
    printf("function2\n");
    fun2(a+b,'a','x',b*d,10+4);
    printf("function3\n");
    fun3(printf("hello"),a*b,10+a,'b');
}

void fun3(int c ,int b,int d,char r)
{
     printf("%d\n",c);
     printf("%d\n",b);
     printf("%d\n",d);
     printf("%c",r);
}

void fun2(int a, char b, char c, double ch, int d)
{

    printf("%d\n", a);
    printf("%c\n", b);
    printf("%c\n", c);
    printf("%lf\n", ch);
    printf("%d\n", d);
   
}

void fun1(int a, int b, int c, char ch, double d, int x, float y)
{

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%c\n", ch);
    printf("%lf\n", d);
    printf("%d\n", x);
    printf("%f\n", y);

}