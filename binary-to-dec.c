#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int count = 0;
    int q = n;
    
    for(int i=0; q != 0; i++)
    {
        q = q / 10;
        count++;
    }

    int decimal = 0;
    for(int i=1; i<=count; i++)
    {
        int remainder = n % 10;
        decimal = decimal + remainder * pow(2, i - 1);
        n = n / 10;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}