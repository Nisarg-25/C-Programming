#include <stdio.h>

int main()
{
    signed int i=5;
    signed j=6; // Here compiler implicitly assume it the integer.
    long k=10; // Here the datatype taken by the compiler implicitly is integer.
    printf("%d is the value of i and %d is the value of j. The value of k is %d.", i,j,k);
    return 0;
}