#include <stdio.h>

int N;
int M;
void printMatrix(int array[][M], int rows, int colomns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colomns; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter the number of the rows of the matrix: \n");
    scanf("%d", &N);

    printf("Enter the number of colomns of the matrix: \n");
    scanf("%d", &M);

    int a[N][M];
    printf("After adding all the elements type 1.\n");
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    printf("The matrix is:\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printMatrix(a, N, M);
    return 0;
}