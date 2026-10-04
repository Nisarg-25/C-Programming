#include <stdio.h>

// This will generate error because both var are inside the same block and the name of two variables cannot be same.
int main()
{
    int var = 3;
    int var = 5;
    printf("%d\n" , var);
    printf("%d", var);
    return 0;
}