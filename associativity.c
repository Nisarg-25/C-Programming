#include <stdio.h>

int fun1()
{
    printf("Neso");
    return 1;
}
int fun2()
{
    printf("Academy");
    return 1;
}
int main()
{
    int a;
    a = fun1() + fun2();
    printf("%d" , a);
    return 0;
}

/* Here is some twist you can not say the output is NesoAcademy because fun1() comes first and it is at the left most side.
   The concept of accociativity is applied when there are more than one different operators of same precedence.
   In this case the output is depended on the compiler. 
*/