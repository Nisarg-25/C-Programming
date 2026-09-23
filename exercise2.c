#include <stdio.h>

int main()
{
    int km;
    printf("Enter distance in kilometers: ");
    scanf("%d", &km);
    float miles = km * 0.621371;
    printf("Distance in miles: %.2f\n", miles);
    return 0;
}