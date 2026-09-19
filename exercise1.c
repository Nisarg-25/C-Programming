#include <stdio.h>

int main()
{
    int math, science;
    printf("Enter marks in Math: ");
    scanf("%d" , &math);
    printf("Enter marks in Science: ");
    scanf("%d" , &science);
    if(math>=50 && science>=50)
    {
        printf("You have passed in both subjects. So you are given a gift of $100.");
    }
    else if(math>=50 || science>=50)
    {
        printf("You have passed in one subject. So you are given a gift of $50.");
    }
    else
    {
        printf("You have failed in both subjects.");
    }
    return 0;
}