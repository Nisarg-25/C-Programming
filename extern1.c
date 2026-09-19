#include <stdio.h>

extern add(int a, int b);
extern int z;
int main()
{
    int a = 5;
    printf("%d\n" , a);
    printf("%d\n" , z);

    int result = add(3,4);
    printf("%d", result);
    return 0;
}