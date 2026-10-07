#include <stdio.h>

int main()
{
    int result = 0;
    int number = 2332;
    int q = number;

    int remainder = q%10;
    result = (result * 10) + remainder;

    q = q/10;
    remainder = q%10;
    result = (result * 10) + remainder;

    q = q/10;
    remainder = q%10;
    result = (result * 10) + remainder;

    q = q/10;
    remainder = q%10;
    result = (result * 10) + remainder;

    if(result == number)
    {
        printf("The number is a palindrome number");
    }
    return 0;
}