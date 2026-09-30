#include <stdio.h>

int main()
{
    int i;
    for ( i = 0; i < 20; i++)
    {
        switch (i)
        {
        case 0 : i += 5;
        case 1 : i += 2;
        case 5 : i += 5;
        default : i += 4;
        }
        printf("%d " , i);
    }
    return 0;
}

/* If you are thinking that the answer is 5 10 15 20 then you are wrong. That can be the answer if there is a break statement.
   But here is no break statement so the answer will be 16 21.
   Explanation:
   first for loop is evaluated so i will be 0 which is less than 20 so switch statement will be evaluated inside the for loop,
   case o will be evaluated and i will be 5, then case 1 will be evaluated and i will be 7, case 5 will be evaluated then i will be 12 and at 
   the last case which is default i will be 16.
   Print statement prints 16 then again it enters into for loop because it is lesser than 20 and it will be evaluated by 1 which is 17 and it
   will be evaluated by the default case and the value of i will be 21.
*/
/* the key thing to notice is there's no break anywhere in this switch, so once a case matches,
   execution falls through every case below it, all the way to default, regardless of whether those labels match the current value of i.
*/