#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d" , &a);
    if(a>=18)
    {
        printf("You are eligible to play GTA V.");
    }
    else if(a>=13)
    {
        printf("You are eligible to play Fortnite.");
    }
    else if(a>=7)
    {
        printf("You are eligible to play Minecraft.");
    }
    else
    {
        printf("You are not eligible to play any games.");
    }
    return 0;
}