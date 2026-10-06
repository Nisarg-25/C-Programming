#include <stdio.h>

int main()
{
    int a, b, c, result;
    printf("Enter the value of a:");
    scanf("%d" , &a);
    printf("Enter the value of b:");
    scanf("%d" , &b);
    printf("Enter the value of c:");
    scanf("%d" , &c);
    result = a * b + c;
    printf("%d * %d + %d = %d", a, b, c, result);
    return 0;
}
// here the precedence of multiplication ia higher than the sum so the multiplication process is done first.
// the precedence of * , / , % is same then the associavity works which is left to right for these functions.