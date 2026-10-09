#include <stdio.h>

int *findMid(int *array, int n)
{
    if(n%2 == 0)
    {
        printf("The middle element does not exist.");
    }
    else
    {
        return &array[n / 2];
    }
    
}

int main()
{
    int N;
    printf("Enter the number of elements inside the matrix: ");
    scanf("%d", &N);

    printf("Enter the elements of the matrix: ");
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int *mid = findMid(a, N);
    printf("Middle element: %d\n", *mid);
    return 0;
}

// Here we have to use the method of call by reference.
/* Here you can see that the function is already denoted as the pointer and we have to use pointer to take the addresses to the function so it can tell
   the middle element.*/