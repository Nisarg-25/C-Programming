#include <stdio.h>
int num()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    return a;
}
// without arguements and with return value.
int main()
{
    printf("The number you entered is: %d\n", num());
    return 0;
}