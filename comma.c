#include <stdio.h>

int main()
{
    int var;
    int b;
    int a = (3,4,8);
    printf("%d\n" , a);

    var = (printf("%s\n" , "Hello!"), 5);
    printf("%d\n" , var);

    b = 3, 4, 8;
    printf("%d" , b);
    return 0;
}

// Here comma operator is used and the value which is given to a is the right most.
// So the output is 8 and other values are rejected after evaluated.
// That means if there is any print statement then it will print the word but then that word will not the value of the variable.
// It has the least precedence. As you can see the value of b because there is one one other operator which is assignment.