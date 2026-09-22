#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;

    if(a&b)
    {
        printf("Result of a & b is 1.");
    }
    if(a&&b)
    {
        printf("Result of a && b is 1");
    }
}

/* I have created this program to understand the difference between the bitwise operator and logical operator.
   In the first case I have used bitwise and operator which works on bit so here the and of 1(0001) and 2(0010) will be 0.
   Therefore the condition will be nit satisfied.
   In the second case I have used logical operator. For logical operator every value rather than 0 is true.
   So the condition will be satisfied and the line will be printed.*/