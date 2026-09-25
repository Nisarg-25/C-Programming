#include <stdio.h>

int main()
{
    char c = 255;
    c = c + 10; // Here the value is exceeding so the value will be printed on the terminal is the MOD of the number devide by 256(2^8).
    printf("%d", c);
    return 0;
}