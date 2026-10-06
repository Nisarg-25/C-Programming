#include <stdio.h>

int factorial(int number)
{
    if(number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
/* In this recursion, there is nothing to be evaluated after the recursive call so this is a tail recursion. In the tail recursion,
   there is no need to have the record stack. */
int main()
{
    int num;
    printf("Enter a number for factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d.\n", num, factorial(num));
    return 0;
}

/* This is the case of the direct recursion, where the function calls itself directly. The base case is when the number is 0 or 1,
   in which case the factorial is 1. For other numbers, the function calls itself with the number decremented by 1, multiplying the result by the
   current number. This continues until the base case is reached, at which point the recursion unwinds and the final result is calculated.
*/