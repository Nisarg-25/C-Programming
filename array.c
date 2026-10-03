#include <stdio.h>
#define N 5

int main()
{
    int arr[5];
    // This is the declaration and definition of an array of integers with 5 elements. The array is named 'arr'.
    // Defining an array in C allocates a contiguous block of memory for the specified number of elements, in this case, 5 integers.

    int a[N] = {1, 2, 3, 4};
    /* This line initializes an array 'a' of size N (which is defined as 5 by macro)
    with the values 1, 2, 3, 4, and 5. The elements of the array are assigned these values in order.*/
    printf("The 5th element of the array is: %d\n", a[4]);

    int b[10] = {[0] = 1, [5] = 2, [9] = 3};
    /* This line initializes an array 'b' of size 10 with specific values at certain indices. All other elements are initialized to 0 by default.
       This is known as designated initialization. */

    int c[] = {1,2,3, [2] = 4, [6] = 45};
    // Here the length of array is decided by the largest designeted index.
    // The designeted value rule over the previous value. So, the value of c[2] will be 4 and not 3.
    printf("The 2th element of the array is: %d\n", c[2]);
    return 0;
}

// If we give the size of the array as 5 and initialize it with 3 values, the remaining elements of the array will be initialized to 0.

/* If we give the size of the array as 5 and initialize it with 6 values, we will get an error because the size of the array is fixed and
   we cannot exceed it.*/
// We have to initialize an array by atleast one value. If we don't initialize an array, we will get an error. It can't be empty.