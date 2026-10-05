#include <stdio.h>

int main()
{
    int age, marks;
    printf("This program checks eligibility for rewards based on age and marks in the HSC. Just enter your marks if you are 17 or 18 years old. If it is more than 95 then type 95. If it is more than 90 then type 90. If it is more than 85 then type 85. If it is more than 80 then type 80.\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch(age)
    {
        case 17:
            switch(marks)
            {
                case 95:
                    printf("You are eligible for scholarship.");
                    break;
                case 90:
                    printf("You are eligible for scholarship.");
                    break;
                case 85:
                    printf("You are eligible for a certificate.");
                    break;
                case 80:
                    printf("You are eligible for a certificate.");
                    break;
                default:
                    printf("You are not eligible for any reward.");
            }
            break;

        case 18:
            switch(marks)
            {
                case 95:
                    printf("You are eligible for scholarship.");
                    break;
                case 85:
                    printf("You are eligible for a certificate.");
                    break;
                default:
                    printf("You are not eligible for any reward.");
            }
            break;
        
        default:
            printf("You are not eligible for any reward.");
    }
    return 0;
}