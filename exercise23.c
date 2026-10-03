#include <stdio.h>

int main()
{
    int x = 3;
    if(x == 2);
    x = 0;
    if(x == 3)
    x++;
    else
    x += 2;

    printf("x = %d" , x);
    return 0;
}

/* Here there is no body of first if statement and x = 0; is not the part of the if statement. It is the redeclarartion of x and the value of x
   will be 0. So the second if statement will gives the false value as x is not equal to 3 and the else statement will be evaluated.
   So the value of x is 2. 
*/