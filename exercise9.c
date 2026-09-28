#include <stdio.h>
#define STRING "%s\n"
#define NESO "Welcome to Neso Academy!"

int main()
{
    printf(STRING , NESO); // Here macros are replaced and the texts which is inside the " " is printed.
    return 0;
}