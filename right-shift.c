#include <stdio.h>

int main()
{
    char a = 3;
    printf("%d\n" , a >> 1);
    return 0;
}

/* Here I have used left shift operator which changes tha value of the variable.
   The value which is changed by the operator will be:
   variable value / (2 ^ right shift operand) */