#include <stdio.h>
typedef int INTEGER;

typedef struct car
{
    char engine[20];
    int age;
}car;

int main()
{
    INTEGER age = 17;
    printf("The age is: %d\n", age);

    car car;
    {
    printf("Enter the name of the engine: ");
    scanf("%s", &(car.engine));
    printf("The engine is: %s\n", car.engine);

    printf("Enter the age of the engine: ");
    scanf("%d", &car.age);
    printf("The engine is %d years old.\n", car.age);
    }
    return 0;
}