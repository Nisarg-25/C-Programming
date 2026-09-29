#include <stdio.h>

int main()
{
    int i, count;
    printf("Enter a non negative number in lower limit.\n");
    printf("Enter a number that you want to write till count: ");
    scanf("%d",&count);
    i = 0;

    while(i<count)
    {
        printf("%d\n",i + 1);
        i=i+1;
    }
    return 0;
}