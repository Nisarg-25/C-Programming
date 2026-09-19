#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The size of int is: %lu bytes\n", sizeof(int));
    printf("The size of long is: %lu bytes\n", sizeof(long));
    printf("The size of float is: %lu bytes\n", sizeof(float));
    printf("The size of double is: %lu bytes\n", sizeof(double));
    printf("The size of short integer is: %lu bytes\n", sizeof(short int));
    return 0;
}
