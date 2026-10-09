#include <stdio.h>

#define R1 2   // rows of first matrix
#define C1 3   // columns of first matrix
#define R2 3   // rows of second matrix (must equal C1)
#define C2 2   // columns of second matrix

int main()
{
    int a[R1][C1] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int b[R2][C2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int result[R1][C2];

    // Initialize result to 0
    for (int i = 0; i < R1; i++)
        for (int j = 0; j < C2; j++)
            result[i][j] = 0;

    // Multiplication logic
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            for (int k = 0; k < C1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}