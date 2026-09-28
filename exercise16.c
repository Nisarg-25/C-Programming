#include <stdio.h>

int var = 5;
int main()
{
    int var = var;
    printf("%d" , var);
    return 0;
}

// If you are thinking that the answer is 5 then you are wrong.
// Because here the scope rule is applied, not the usual shadowing" intuition.
/* In C, a variable's scope begins immediately after its declarator (i.e., right after the name var is written),
   not after its entire declaration (including the initializer) finishes. So the moment the compiler reads int var,
   the local var already exists. Compiler gives the garbage value before the initialization. 
*/