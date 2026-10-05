#include <stdio.h>

int fun(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else
    {
        return 1 + fun(n/2);
    }
    return 0;
}
/* If you are thinking that this is a tail recursion, then you are wrong. Because after the recursive call, we are adding 1 to the result
   of the recursive call. So this is not a tail recursion. This is non-tail recursion. */
int main()
{
    printf("%d", fun(8));
    return 0;
}