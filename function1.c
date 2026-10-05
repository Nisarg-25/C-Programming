#include <stdio.h>

void printstar(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("*");
    }
}
//with arguements and no return value.
int main()
{
    int n;
    printf("Enter the number of stars to print: ");
    scanf("%d", &n);
    printstar(n);
    return 0;
}