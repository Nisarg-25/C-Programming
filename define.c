#include <stdio.h>
#define Greater(x , y)  if(x > y) \
                            printf("%d is greater than %d" , x, y); \
                        else if(x < y) \
                            printf("%d is lesser than %d" , x, y);

int main()
{
    Greater(5 , 4);
    return 0;
}