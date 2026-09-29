#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int power;
    printf("Enter the power: ");
    scanf("%d", &power);
    float result = 1;

    if(power == 0)
    {
        printf("Result: 1\n");
    }
    else if(power >= 1)
    {
        for(int i = 1; i <= power; i++)
        {
            result = result * n;
        }
        printf("Result: %f\n", result);
    }
    else if(power < 0)
    {
        float reverse = 1;
        for(int i = 1; i <= -power; i++)
        {
            result = result * n;
        }
        reverse = 1.0 / result;
        printf("Result: %f\n", reverse);
    }
    else if(power < 1 && power > 0)
    {
        for(int i = 1; i <= power; i++)
        {
            result = result * n;
        }
        printf("Result: %f\n", result);
    }
    return 0;
}