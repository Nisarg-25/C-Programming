#include <stdio.h>

int main()
{
    char a[10];
    printf("Enter your surname: \n");
    printf("If you want to share the information then you can share below by using enter: ");
    gets(a);
    printf("Your surname is %s.", gets(a));
    return 0;
}

// When there is a case of overflowing then scanf takes the number of characters is equal to the 9 in this case and print it.
// But in the case of gets(), it will try to write the characters beyond the memory allocated to the character array which is unsafe.  