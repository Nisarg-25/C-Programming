#include <stdio.h>
#include <math.h>

int main()
{
    int order = 0;
    int result = 0;
    int remainder;
    int num;
    printf("Enter a number: ");
    scanf("%d" , &num);
    int q = num;
    int z = num;

    while(q != 0)
    {
        q = q/10;
        order++;
    }
    printf("The order of the number is %d\n" , order);

    while(z != 0)
    {
        remainder = z%10;
        result = result + pow(remainder,order);
        z = z/10;
    }
    if(result == num)
    {
        printf("The number is an armstrong number");
    }
    else
    {
        printf("The number is not an armstrong number");
    }
    return 0;
}