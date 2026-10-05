#include <stdio.h>

/* Here we have initialized the variable with some value so it should be stored in the data segment,
   but we are wrong it will be stored in the bss segment because it stores the data which is uninitialized,
   but here i is already takes 0 because it is global variable.*/ 
/* If we take the other value of i rather than 0 then it will be stored in data segment.*/
static int i = 0;
int main()
{
    return 0;
}