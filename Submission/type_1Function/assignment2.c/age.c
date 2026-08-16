#include<stdio.h>
void age( );
void main()
{
    age();
}

void age()
{
    int age;
    printf("Enter Age");
    scanf("%d",&age);


    if(age>=60)
      printf("Senior");
       else if(age>=20 && age<=59)
       printf("Adult");
         else if (age>12 && age<=19)
         printf("Teenager");
           else
           {
            printf("Child");
           }
}
