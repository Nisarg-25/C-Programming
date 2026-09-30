#include <stdio.h>

int main()
{
    int i = 0;
    for (printf("one\n"); i < 3 && printf(""); i++)
    {
        printf("Hi!\n");  
    }
    return 0;
}

/* This is the tricky question because there is a print statement in the place of init.
   Explanation:
   Here integer i is already declared, defined and initialized so there is no use of init inside for loop.
   But there is a print statement in the place of init and "there is a rule that the statement which is in the place of init will be evaluated
   only ones not every time the loop runs".
   Then there is a part of condition here it can be true or false. In this case it is decided by the final output of and operator.
   As we know that 0 is less than 3 so first operand gives true value but in the case of second operand the print statement gives the value 0
   here because there is no character and the final output of the and operator will be false and the for loop will not be evaluated. 
*/