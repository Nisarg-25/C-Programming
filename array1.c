#include <stdio.h>

int main()
{
    int a[] = {25, 26, 27, 28, 1, 22, 32, 4, 5, 65, 74, 88, 96, 12, 13, 14, 15, 16, 17, 18, 19, 20, 10, 11, 21, 22, 23, 24, 44, 29, 30};
    printf("The size of the array is: %lu bytes\n", sizeof(a));
    printf("The number of elements in the array is: %lu\n", sizeof(a) / sizeof(a[0]));
    return 0;
}

// Question: Find the size of an array in C.To find the size of an array in C, you can use the `sizeof` operator.
// Question: How do you find the number of elements in an array in C?