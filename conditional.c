#include <stdio.h>

int main()
{
    int marks;
    char result;
    printf("Enter your marks:");
    scanf("%d" , &marks);
    result = (marks > 33) ? 'p' : 'f' ;
    printf("%c" , result);
    return 0;
}