#include <stdio.h>

int main()
{
    int i = -5;
    while(i <= 5)
    {
        if(i >= 0)
        {
            break;
        }
        else    
        {
            i++;
            continue;
        }
         printf("Neso");
    }
    return 0;
}

/* Here continue statement is used so when the value of i will increase it will recheck the condition of while loop
   and the rest of the code will not evaluated.
*/