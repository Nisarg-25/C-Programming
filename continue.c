#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

/* The break statement tells the ccompiler to run the code outside of the loop where continue statement just tells the compiler to skip the
   particular case. 
*/