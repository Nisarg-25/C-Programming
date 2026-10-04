#include <stdio.h>

void square()
{
    int rows;
    printf("Enter the number of rows for the square: ");
    scanf("%d", &rows);
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    square();
    return 0;
}