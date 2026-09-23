#include <stdio.h>

int main()
{
    int a = 5; 
    int b = 3;
    int incr;

    incr = (a > b) && (b++);
    printf("%d\n" , incr);
    printf("%d" , b);
    return 0;
}

// Logical operators return value either 0 or 1 where 0 stands for false statements and 1 stands for true statements.
// If there is any output rather than 0 then the statement is true.