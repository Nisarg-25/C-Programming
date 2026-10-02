#include <stdio.h>

int main()
{
    int rank;
    printf("Enter your rank: ");
    scanf("%d" , &rank);

    switch(rank)
    {
        case 1:
            printf("You are the first place winner.");
            break;
        case 2:
            printf("You are the second place winner.");
            break;
        case 3:
            printf("You are the third place winner.");
            break;
        default:
            printf("You did not win a prize.");
    }
    return 0;
}

// Facts:
/* If we do not use break; statement after case 1 then the case 2 will be evaluated.
   You can not duplicate the case that will show yoy an error by compiler.
   Only those expressions are allowed in switch which result in an integral constant value. The float value is not allowed in switch.
   Also we can not use a float value in case label even if it is constant.
   If you make a equation in the place of case label which finaly result the integer value then it is allowed.
   variables expressions are not allowed in the place of case label. Although macros are allowed.
*/