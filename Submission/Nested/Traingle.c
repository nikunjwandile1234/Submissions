#include<stdio.h>

void main(){

    int sidea;
    int sideb;
    int sidec;

    printf("Enter Sidea:");
    scanf("%d",&sidea);
    printf("Enter Sideb:");
    scanf("%d",&sideb);
    printf("Enter Sidec:");
    scanf("%d",&sidec);

    if(sidea==sideb && sideb==sidea && sidea==sidec)
    {
        printf("The traingle is Equilateral Traingle");
    }
    else if(sidea==sideb || sideb==sidec || sidea==sidec)
    {
        printf("The triangle is Isosceles traingle ");
    }
    else if (sidea!=sideb||sideb!=sidec||sidea!=sidec){
        printf("The Traingle is Scalene Traingle");
    }
    else
    {
        printf("The Traingle dimensions are incorrect");
    }
    
    
}