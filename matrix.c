#include <stdio.h>

int main()
{
    int R1,R2,C1,C2;
    printf("Enter the number of rows of first matrix: \n");
    scanf("%d" , &R1);

    printf("Enter the number of colomns of first matrix: \n");
    scanf("%d", &C1);

    printf("Enter the number of rows of second matrix: \n");
    scanf("%d" , &R2);

    printf("Enter the number of colomns of second matrix: \n");
    scanf("%d", &C2);

    if(C1 != R2)
    {
        printf("The matrix multiplication is not possible.");
    }
    else
    {
        int a[R1][C1];
        printf("Enter the elements: \n");
        for (int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int b[R2][C2];
        printf("Enter the elements: \n");
        for (int i = 0; i < R2; i++)
        {
            for (int j = 0; j < C2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
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
        printf("Matrix multiplication is: \n");
        for(int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C2; j++)
            {
                printf("%4d", result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}