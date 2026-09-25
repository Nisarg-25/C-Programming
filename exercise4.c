#include <stdio.h>

int main()

{
    printf("%s\n" , "Hello"); // Here the space is taken as the number of characters inside the word.
    printf("%10s\n" , "Hello"); // Here the space taken by the terminal is 10.
    printf("%4s" , "Hello"); // The space taken by the terminal is as the word even there is %4s.
    return 0;
}