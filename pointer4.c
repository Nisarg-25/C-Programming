#include <stdio.h>

int main()
{
    int a[2][2]={
        {1, 2},
        {3, 4}
    };

    int *p = a;
    // Access the second element of the first 1D array by using pointer.
    printf("The second element of the first 1D array is: %d\n", *(*a + 1));

    // Access the second last element of the second 2D matrix.
    int b[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    int *q = b;
    printf("The second last element of the second 2D matrix is: %d", *((*(*b + 2)) + 2));

    return 0;
}