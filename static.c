#include <stdio.h>

static int count;
/* Here static keyword indictaes that the variable will not be shown for other files in the same folder
   even it is a global variable.*/
int main()
{
    int value;
    value = count + 1;
    printf("%d" , value);
    return 0;
}
// Staric variable does not get destroyed after the function call, it will be stored in the data segment of the memory.