#include <stdio.h>
#include <stdlib.h>

int count;
/* Here if we take count variable inside the function increment so it will be local variable
   and it takes the value which is given to it every time because the function is destroyed after 
   complition.*/
int increment()
{
    count = count + 1;
    return count;
}
int main()
{
    int value;
    value = increment();
    value = increment();
    value = increment();

    printf("%d" , value);
    return 0;
}