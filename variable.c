#include <stdio.h>

int fun();

int var = 10; // This is a global variable outside of all the functions.

int main()
{
    int var = 5; // This is a local variable and it is used inside the scope of the functions.
    printf("%d\n" , var);

    fun();
    return 0;
}

int fun()
{
    printf("%d" , var);
    return 0;
}