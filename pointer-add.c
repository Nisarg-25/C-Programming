#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[0];
    p = p + 3;
    printf("The value of sum is: %d", *p);
    return 0;
}

/* Here if you think about the index of the matrix which address is stored insidee the pointer p that is 0 and if we add  3 in 0 then that value
   will be 3 so the number in the matrix which index is 3 is printed, if that does not in the matrix then it defines an error like undefined 
   behaviour. */
/* If we think about the original address in bytes then suppose the address of a[0] as 1000 then 3 is not added it inside directly but it will added
   inside the address by multiplying 4 bytes(size of integer) into 3. So the ultimate address will be 1000 + 3*(4) = 1012 which eventually points to
   the a[3].*/