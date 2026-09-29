#include <stdio.h>

int main()
{   
    int x, k;
    int i = 5;
    x = ++i;
    printf("%d\n" , x);

    int j = 5;
    k = j++;
    printf("%d" , k);
    return 0;
}

/* in this you can see the difference between the pre increment and post increment,
   I have printed both x and k with pre increment and post increment and the outputs are different.
   In the case of x, i is incremented to 6 firstly and then stored in the x so the value of x is 6.
   In the case of k, j is stored in k firstly so the value of k is 5 and then j is incremented to 6. */