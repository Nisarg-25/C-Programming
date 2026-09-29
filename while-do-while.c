#include <stdio.h>

int main()
{
    int i=0;
    while(i>0)
    {
        printf(i);
        i--;
    }
    int j=0;
    do
    {
        printf("%d" , j);
        i--;
    } while (i>0);
    return 0;
}

/* Here i have used both while loop and do-while loop to show a difference bitween them.
   In the first while loop the condition is checked and if it is true then the code runs. In our case it is false so there is no output.
   In the case of do-while loop we first evaluate the body of loop that prints the value and then the condition is checked.
   So the output 0 is performed by the do-while loop. 
*/
/* The one other difference is that we do not use semi colon at the end of the while loop but in the case of do-while loop we use semi colon
   at the end of while.
*/