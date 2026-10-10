// Functionality: 
/*

1) It must continue to read the string even after seeing white space characters.
2) It must stop reading the string after seeing the newline character.
3) It must discard extra characters.
4) And, it must return the number of characters it stores in the character array.

*/

#include <stdio.h>

int input(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
    
}
int main()
{
    char str[100];
    printf("Enter  something: ");
    int n = input(str, 20);
    printf("%d %s", n, str);
    return 0;
}

// getchar() function is used to read one character at a time from the user input. It returns an integer equivalent to the ASCII code of the character.
