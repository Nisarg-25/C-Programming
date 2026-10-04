#include  <stdio.h>

int main()
{
    float var = 3.14159265358979323846; // float precise up to six digits after decimal point
    double var1 = 3.14159265358979323846; //double precise up to six digits in C, 5 digits in CPP and 8 digits in Python
    double var2 = 3.14159265358979323846;
    printf("The value of var is: %f\n", var);
    printf("The value of var1 is: %f\n", var1);
    printf("The value of var2 is: %f\n", var2);
    printf("The value of var is: %0.5f\n", var); // prints 5 digits after decimal point
}