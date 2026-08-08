#include<stdio.h>

void main()
{
    char Student;
    int price;
    int discount;
    int total;
    printf("Enter the price:");
    scanf("%d",&price);
    fflush(stdin);
    printf("Are you Student? y for yes, n for no ");
    scanf("%c",&Student);
    

    if(Student=='y' || Student =="Y")
    {
        if(price>500)
        {
            discount=price*0.20;
        }
        else
        {
            discount=price*0.10;
        }
    }
    else if(Student=='n'|| Student =='N')
    {
        if(price>600)
        {
            discount=price*0.15;
        }
        else{
            discount=0;
        }
    }
    else
    {
        Printf("Enter the Valid Identity");
    }
    
    total=price-discount;
    printf("The total Price after discount is %d",total);

}