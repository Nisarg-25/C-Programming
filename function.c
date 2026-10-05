#include <stdio.h>

int sum(int a, int b) // These are the formal parameters of the function sum.
{
    return a + b;
}
// with arguements and return value.
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c=sum(a,b); // These are the arguments we are passing to the function sum.
    printf("The sum of %d and %d is: %d\n", a, b, c);
    return 0;
}

// If we use a function in the main function, we need to declare the function before the main function still it is not compulsory.
// If we don't declare the function before the main function, we will get an error. Although it is not compulsory.
// Once we declare the function before the main function, we can use it in the main function whether it's defined before or after the main function.
/* The error occurs because the compiler does not know what is the return type of the function and what are the parameters of the function.
   So, the compiler will take a default assumption as integer and that does not match the actual function definition.
*/ 