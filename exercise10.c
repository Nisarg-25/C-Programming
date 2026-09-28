#include <stdio.h>

int main()
{
    int var = 0X43FF;

    // When we put 0X before the number then the value will be hexa decimal.
    printf("%x\n" , var);
    printf("%d" , var);
    // Here the hexa decimal turns into decimal value.
    return 0;
}