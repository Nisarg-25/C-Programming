#include <stdio.h>

int var; // Here the variable is global so it will initialized by 0 automatically.
int main()
{
    printf("%d\n", var);
    fun();
    return 0;
}

int fun()
{
    auto int var; // Here the variable is local so it will take the garbage value even it is auto or not.
    printf("%d" , var);
    return 0;
}