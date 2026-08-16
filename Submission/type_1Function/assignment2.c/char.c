#include<stdio.h>
void character();
void main()
{
   character();
}

void character()
{
     char A;
    printf("Enter the Character ");
    scanf("%c",&A);


    if(A>='a'&&A<='z' || A>='A' && A<='Z'){
         printf("its an Alphabet");
    }
    else {
        if(A>='0' && A<='9'){
        printf("its and Number ");
        }
       else{
        printf("its a symbol");
    }
}
}