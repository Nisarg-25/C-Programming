#include <stdio.h>

int main()
{
    int n = 2;
    for (int i = 1; i < 20; i++)
    {
        if(i == n)
        {
            n = n + 2;
            continue;
        }
        printf("%d\n" , i);
    }
    return 0;
}

// This program will print the odd integers only because here we taken the integer n whose value is 2 which is even value.
// So in the for loop, when it reaches at the i = 2 if statement will be evaluated and the value of n will be added by 2 which will also a even number.
// Inside the if statement there is a break statementth that will skip the rest of the code inside the loop and next case will be run.
// So every time only odd integers will be printed and in the case of even integers continue statement will be evaluated.