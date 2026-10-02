#include <stdio.h>

int main()
{
    int num;
    int rank;
    for(int i=1; i<=10; i++)
    {
        printf("%d, Enter your rank:\n",i);
        scanf("%d", &rank);

        printf("This query will be skipped if you enter 5, otherwise it will be processed for many times.\n");

        printf("Enter a number: ");
        scanf("%d",&num);
        if(num==5)
        {
            goto skip;
        }
    }
    skip:
    printf("Skipped iteration\n");
    return 0;
}