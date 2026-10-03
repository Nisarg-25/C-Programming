#include <stdio.h>

int main()
{
    unsigned int i = 500;
    while (i++ != 0);
    printf("%d" , i);
    return 0;
}

/* Here the common mistake that everyone do is that they think that the print statement is the part of the while loop but it is not.
   You can see a semi colon after the while statement so the while loop does not have the body in our case.
   As we know that the value of will be increased after the while loop is evaluated but it will check repeatedly that the value is 0 or not.
   When the value reaches to the maximum value of the unsigned int then it will start from 0 and the condition inside the while loop be false
   then we get outside of the while loop and the value of i will be 1 because of post increament hense our output is 1. 
*/