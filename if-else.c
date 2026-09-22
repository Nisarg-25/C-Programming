#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d" , &a);
    if(a>=18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }
    return 0;
}