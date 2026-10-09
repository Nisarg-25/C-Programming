#include <stdio.h>

int num = 1;
int even();
int odd()
{
    if(num <= 10)
    {
        printf("%d ", num + 1);
        num++;
        even();
    }
    return 0;
}
int even()
{
    if(num <= 10)
    {
        printf("%d ", num - 1);
        num++;
        odd();
    }
    return 0;
}
int main()
{
    odd();
    return 0;
}