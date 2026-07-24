#include<stdio.h>


void main() {
    int a = 80, b = 60, c = 90, d = 70, e = 45;

    int total = a + b + c + d + e;

    printf("The total marks got by the students is %d\n", total);

    float a_per = (float)a / total * 100;
    float b_per = (float)b / total * 100;
    float c_per = (float)c / total * 100;
    float d_per = (float)d / total * 100;
    float e_per = (float)e / total * 100;
    printf("the percentage got to a is %f\n",a_per);
    printf("the percentage got to b is %f\n",b_per);
    printf("the percentage got to c is %f\n",c_per);
    printf("the percentage got to d is %f\n",d_per);
    printf("the percentage got to e is %f",e_per);
}