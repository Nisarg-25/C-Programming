#include <stdio.h>

int main()
{
    int n;
    printf("How many rows you want in your pyramid: ");
    scanf("%d" , &n);

    for(int i=n; i>0; i--)
    {
        for(int j = 2*n - 1; j > 0; j--)
        {
            if(j >= n-(i-1) && j >= n+(i-1))
            {
                printf("* ");
            }
            else
            {
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}
