#include <stdio.h>

int main()
{
    char var = 'A';
    char var1 = 65; // ASCII value of 'A'
    char var2 = -65; // This will cause undefined behavior
    char var3 = -28; // This will also cause undefined behavior
    printf("The value of var is: %c\n", var);
    printf("The value of var1 is: %c\n", var1);
    printf("The value of var2 is: %c\n", var2);
    printf("The value of var3 is: %c\n", var3);
    return 0;
}