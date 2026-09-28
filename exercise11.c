#include <stdio.h>

static int i;
static int i = 27;
static int i;
int main()
{
    static int i;
    printf("%d\n" , i);
    return 0;
}