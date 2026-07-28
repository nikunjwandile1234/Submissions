#include<stdio.h>

void main()
{
    char Student;
    int price;
    int discount;
    int total;
   
    printf("Are you Student? y for yes ");
    scanf("%c",&Student);
    printf("Enter the price:");
    scanf("%d",&price);

    if(Student=='y')
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
    else
    {
        if(price>600)
        {
            discount=price*0.15;
        }
        else{
            discount=0;
        }
    }
    
    total=price-discount;
    printf("The total Price after discount is %d",total);

}