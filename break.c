#include <stdio.h>

int main()
{
    int rank;
    printf("Enter your rank: ");
    scanf("%d",&rank);

    while(rank > 10)
    {
        printf("You can play Forza Horizon VI.\n");
        break;
    }

    if(rank <= 3)
    {
        printf("Welcome to the C programming World.\n");
    }
    return 0;
}