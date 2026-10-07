#include <stdio.h>

int sum(int n)
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
        return (pow(2, n - 3));
    }
}
int main()
{
    int position;
    printf("Enter the position of the number you want to find: ");
    scanf("%d", &position);
    printf("The number at position %d is %d\n", position, sum(position));
    return 0;
}