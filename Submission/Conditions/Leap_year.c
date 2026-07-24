#include<stdio.h>

void main(){

    int year=1900;

    if(year%4==0){

        if(year%100!=0 || year%400==0)
        {
            printf("its a leap year");

        }
        else{
            printf("its not leap year");
        }
    }
    else{

        printf("its not leap year");
    }
}