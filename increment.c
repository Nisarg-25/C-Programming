#include <stdio.h>

int main()
{
    int a=5;
    int b=6;
    int c;
    // a++;
    ++a;
    printf("%d\n" , a);
    // c = (a+b)++;
    printf("%d" , c);
    return 0;
}

/* If we try to print c then it will give some error along with (a+b)++ because,
   here (a+b) is rvalue and you can not increment the rvalue.
   Because here (a+b) is constant and it is not capable to store the data.*/
// If you pre increment or post increment then answer will be same but not process.