#include <stdio.h>
#define R 7
#define C 7

int main()
{
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (i == 1 || j == 1 || i == R || j == C)
            {
                printf("5");
            }
            if ((i == 2 || i == R - 1) && (j != 1 && j != C))
            {
                printf("4");
            }
            if ((i == 3 || i == 4 || i == R - 2) && (j == 2 || j == C - 1))
            {
                printf("4");
            }
            if ((i == 3 || i == R - 2) && (j != 1 && j != 2 && j != C - 1 && j != C))
            {
                printf("3");
            }
            if (i == 4 && (j == 3 || j == 5))
            {
                printf("3");
            }
            if (i == 4 && j == 4)
            {
                printf("2");
            }
        }
        printf("\n");
    }
    return 0;
}