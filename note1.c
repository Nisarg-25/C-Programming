#include <stdio.h>

static int i;
static int i = 27;
static int i;
int main()
{
    printf("%d\n" , i);
}
/* Here the output is 27 though we have declared uninitialized i in the last.
   Reason:
   declarations aren't executable statements. They don't run one after another at runtime the way assignments do. They're resolved by the
   compiler before the program ever runs,and the compiler merges all tentative definitions of the same name into one single variable with
   one single storage location in memory. */