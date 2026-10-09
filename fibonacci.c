#include <stdio.h>

int number(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        return (number(n - 1) + number(n - 2));
    }
}
int main()
{
    int n;
    printf("Enter the position of the Fibonacci number you want to find: ");
    scanf("%d", &n);
    printf("Fibonacci of %d is %d\n", n, number(n));
    return 0;
}