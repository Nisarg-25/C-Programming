#include <stdio.h>

int main()
{
    int result = 0;
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int q = num;
    int remainder;
    int fact;
    while (q != 0)
    {
        remainder = q%10;
        fact = 1;
        while(remainder != 0)
        {
            fact = fact * remainder;
            remainder = remainder - 1;
        }
        result = result + fact;
        q = q/10;
    }
    if(result == num)
    {
        printf("The number is a strong number");
    }
    else
    {
        printf("The number is not a strong number");
    }
    return 0;
}