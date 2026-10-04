#include <stdio.h>

enum var{false, true};
int main()
{
    enum var answer;
    answer = true;
    printf("%d", answer);
    return 0;
}

// The concept of enumeration is used to give a name to the number.
// As you can see in the program that I have created two options true and false but I have not given any value to them.
// So the compiler will automatically assign value to the name starting from 0.
// As you know that we can also use #define to give a name to the number so why we need the enum?
// Enum can be created in the local scope and values are also assigned automatically by the compiler so we need to use enum.
// All unassigned name will get value as nthe previous value + 1.
// Only integral values are allowed. All enum constant must be unique in their scope.