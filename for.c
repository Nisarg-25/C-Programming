#include <stdio.h>

int main()
{
    int i, count;
    printf("Enter a non negative number in lower limit.\n");
    printf("Enter a number that you want the multiplication table for: ");
    scanf("%d",&count);

    for(i=0;i<10;i++)
    {
        printf("%d x %d = %d\n", count, i + 1, count * (i + 1));
    }
    return 0;
}

// Here i++ is increment operator which is unary operator.
// Only after the body finishes completely, run the increment part (i++).