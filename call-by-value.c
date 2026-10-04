#include <stdio.h>

int fun(int x, int y)
{
    x = 20;
    y = 30;
}
int main()
{
    int x = 10, y = 20;
    fun(x, y);
    printf("The value of x is: %d and y is: %d\n", x, y);
    return 0;
}

/* In this code, we are using call by value method. In this method, the values of the actual parameters are copied to the formal parameters of the
   function. So, when we change the values of the formal parameters inside the function, it does not affect the actual parameters in the main
   function. Therefore, the output will be: The value of x is: 10 and y is: 20
*/