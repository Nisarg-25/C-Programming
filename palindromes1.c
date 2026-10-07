#include <stdio.h>

int main()
{
    int result = 0;
    int num;
    printf("Enter a number: ");
    scanf("%d" , &num);

    int q = num;
    int remainder;
    while(q > 0)
    {
        remainder = q % 10;
        result = (result * 10) + remainder;
        q = q / 10;
    }
    if(result == num)
    {
        printf("The number is the palindrome number.");
    }
    else
    {
        printf("The number is not a palindrome number.");
    }
    return 0;
}
