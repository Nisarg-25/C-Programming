#include <stdio.h>
#define add(x,y) x+y
#define sum(p,q) (p+q)

int main()
{
    printf("result of expression a * b + c is: %d\n", 5 * add(4,3));
    printf("result of expression z * (p+q) is: %d", 5 * sum(4,3));
    return 0;
}
// In the first case the output is 23 because here expression takes place first and then evaluation.
// In the second case the output is 35 because here the bracket opens first.
