#include <stdio.h>

int main()
{
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var) ? ( var2 > 23 ? ( (var == 75) ? 'A' : 0) : 0) : 0;

    printf("%d" , num);
    return 0;
}

// Here A is simply inroduced by the ASCII value which is 65.
// It is 97 for 'a'.