#include <stdio.h>

int main()
{
    printf("%s\n", "Hello! I am Nisarg.");

    // It does not get error but..
    /* printf("%s\n", "You have to dream before your dreams come true.
        --A.P.J Abdul Kalam"); */
    // If you are typing the string sentence in more than a line then it will produse error. So..

    printf("%s\n", "You have to dream before your dreams come true. \
        --A.P.J Abdul Kalam");

    // Method 2:

    printf("%s", "You have to dream before your dreams come true. ""--A.P.J Abdul Kalam");
    return 0;
}

// Writting the sentence like the line number 12 is called "Splicing" in C language.
// There is a disadvantage of that process that that will take the spaces before the code in the main function and print it in the output.