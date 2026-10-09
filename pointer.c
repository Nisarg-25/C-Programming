#include <stdio.h>

void fun(int array[], int length, int *min, int *max)
{
    *min = *max = array[0];
    for (int i = 0; i < length; i++)
    {
        if(array[i] > *max)
        {
            *max = array[i];
        }
        if (array[i] < *min)
        {
            *min = array[i];
        }
    }
}
int main()
{
    int N;
    printf("Enter the number of elements: \n");
    scanf("%d", &N);
    int a[N];
    printf("Enter the elements of the matrix: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &a[i]);
    }
    
    int min, max;
    int length = sizeof(a)/sizeof(a[0]);

    fun(a , length, &min, &max);
    printf("The minimum value is: %d\n", min);
    printf("The maximum value is: %d\n", max);
    return 0;
}


/* Here I am creating a function called fun to check the maximum and minimum value in the matrix so as we know that we can not pass the value 
   to fun by the main function but we can pass the address of the the value and can make changes that will eventually change the value of the
   variable in the main function. So this is called the call by reference method. */
/* Here the length, array, min and max value's addresses is going to the function fun. The value of min and max is changed in the fun.*/