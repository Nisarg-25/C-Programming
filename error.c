#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int a = UINT_MAX;
    int b = INT_MAX;
    int c = INT_MIN;
    printf("%u is the maximum value of unsigned int\n", a);
    printf("%d is the maximum value of signed int\n", b);
    printf("%d is the minimum value of signed int\n", c);

    // Displaying the error message for overflow and underflow
    
    int overflow = b + 1; // This will cause overflow
    printf("Overflow example: %d + 1 = %d (undefined behavior)\n", b, overflow);
    return 0;
}