#include <stdio.h>

int fun(int *ptr1, int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 30;
}
int main()
{
    int x = 10, y = 20;
    fun(&x, &y);
    printf("The value of address of x is: %p and address of y is: %p\n", &x, &y);
    printf("The value of x is: %d and y is: %d\n", x, y);
    return 0;
}

/* In this code, we are using call by reference method. In this method, the addresses of the actual parameters are passed to
   the formal parameters of the function. So, when we change the values of the formal parameters inside the function, it affects
   the actual parameters in the main function. Therefore, the output will be: The value of x is: 20 and y is: 30
*/