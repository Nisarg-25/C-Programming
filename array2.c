#include <stdio.h>

int main()
{
    int a[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
    };
    
    printf("Row total: ");
    for(int i =0; i < 5; i++)
    {
        int sum = 0;
        for(int j = 0; j < 5; j++)
        {
            sum = sum + a[i][j];
        }
        printf("%d ", sum);
    }

    printf("\n");
    printf("Column total: ");
    for(int j = 0; j < 5; j++)
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum = sum + a[i][j];
        }
        printf("%d ", sum);
    }
    return 0;
}