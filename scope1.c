#include <stdio.h>

// This code is correct because here the first var is out of the range of the printf function.
int main()
{
    int var = 3;
    {
        int var = 5;
        printf("%d\n", var);
    }
    printf("%d\n", var);
    return 0;
}