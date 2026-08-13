#include<stdio.h>

void vowels();

void main()
{
    vowels();
}

void vowels()
{
    char A='b';
    printf("A= %c",A);

    if(A=='a'|| A=='e'||A=='i'||A=='o'||A=='u')
    {
        printf("The Character is Vowel");
    }
    else
    {
        printf("The Character is Consonant");
    }
}