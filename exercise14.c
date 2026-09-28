#include <stdio.h>

int main()
{
    int i = 5;
    int var = sizeof(i++);
    printf("%d %d", i, var);
    return 0;
}

/* Here 6 4 is not the answer and there is areason behind it.
   If the type of the operand is a variable length array type, then the operand will evaluated.
   Otherwise the operand is not evaluated. (C99)  
*/