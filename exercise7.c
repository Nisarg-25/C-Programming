#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned i = 1;
    int j = -4;
    printf("%d is the max value of integer.", sizeof(unsigned int));
    printf("The value of the sum is %u", i+j);
    return 0;
}

/* Here %u prints the unsigned value but our answer is negative so the compiler take 1's compliment and print the value of it.
 If it is overflowing then the value printed by the terminal changes machine to machine.*/