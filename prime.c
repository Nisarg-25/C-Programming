#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int var;
    int var1;
    int i;
    int x;
    printf("Enter a number(only positive integer): ");
    scanf("%d" , &num);
    
    var = ceil(sqrt(num));
    x = num;

    int count = 0;
    for ( i = 2; i < var; i++)
    {
        if(x%i == 0)
        {
            count = 1;
        }
    }
    if((count == 0 && x != 1) || x == 2 || x == 3)
    {
        printf("It's a prime number.");
    }
    else
    {
        printf("It's not a prime number.");
    }
    return 0;
}