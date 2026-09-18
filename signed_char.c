#include <stdio.h>

int main()
{
    char var = 128;
    char var1 = -128;
    printf("The value of var is: %c\n", var);
    printf("The value of var1 is: %c\n", var1);
    // both characters will be same as they define same 8 bit binary value 10000000.
    return 0;
}