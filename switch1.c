#include <stdio.h>
#define y 2
#define z 23

int main()
{
    int x = 2;
    switch (x)
    {
    case y:
        printf("Number is 2");
        break;
    
    case z:
        printf("Number is 23");
        break;

    default:
        printf("Number is neither 2 nor 23");
        break;
    }
    return 0;
}

/*If you make a equation in the place of case label which finaly result the integer value then it is allowed.
  variables expressions are not allowed in the place of case label. Although macros are allowed.
  Default can be placed anywhere inside switch even at the top. It will still get evaluated if no match is found.
*/