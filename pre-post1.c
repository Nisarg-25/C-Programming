#include <stdio.h>

int main()

{
    int a = 4, b = 3;
    printf("%d\n", a+++b);
    printf("%d" , a + ++b);
    return 0;
}

/* Here I have used both pre and post increment concept,
   In the first case I have printed a+++b so a++ is post increment so it gives the value of a firstly to the equation,
   then it increments the value of a by 1.
   So the equation will be 4 + 3.
   In the second case I have printed a + ++b so ++b is pre increment so firstly the value of b is increased by 1 then that value is given to the function.
   But here is the critical situation comes where the possibility of bieng fooled is highest because the value of a is not 4 now it is 5.
   So the equation will be 5 + 4.
*/