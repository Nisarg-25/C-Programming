#include <stdio.h>

int main()
{
    int a = 5;
    printf("%d" , a);
}

// Here you can see that I have not written return 0; statement but the code ran successfully without any error.
// The reason for that is here:
/* 
   The C99 standard (and C11, C17 after it) has a specific rule just for main():
   if execution reaches the closing } of main() without hitting an explicit return statement,
   the compiler treats it as if return 0; was written there automatically. This is a special case that applies only to main()
   — not to any other function.
*/