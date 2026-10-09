#include <stdio.h>

int main()
{
    int n;
    printf("The series is: ");
    scanf("%d", &n);

    if(n==1)
    {
        printf("0");
    }
    else if(n==2)
    {
        printf("0 1");
    }
    else
    {
        int a=0, b=1, c;
        for(int i=1; i<=n; i++)
        {
            c=a+b;
            printf("%d ", a);
            a=b;
            b=c;         
        }
    }
    return 0;
}