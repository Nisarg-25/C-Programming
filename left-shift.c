#include <stdio.h>

int main()
{
    char var = 3;
    printf("%d\n" , var << 1);
    return 0;
}

// Here I have used left shift operator which changes the value of the variable.
// Ultimate value which is changed by operator will be:
// variable value * (2 ^ right operand)