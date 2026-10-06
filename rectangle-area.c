#include <stdio.h>
#include <stdlib.h>

struct coordinate
{
    int x, y;
};
struct position
{
    struct coordinate upper_left;
    struct coordinate lower_right;
};

int area(struct position r)
{
    int length, breadth;
    length = r.upper_left.x - r.lower_right.x;
    breadth = r.upper_left.y - r.lower_right.y;
    int a = abs(length * breadth);
    printf("The area is: %d", a);
}
int main()
{
    struct position r;
    printf("Enter the x and y co-ordinate of the upper left point: ");
    scanf("%d %d", &r.upper_left.x, &r.upper_left.y);
    printf("Enter the x and y co-ordinate of the lower right point: ");
    scanf("%d %d", &r.lower_right.x, &r.lower_right.y);

    area(r);
    return 0;
}

// Here I have used two structures. One is for the x and y co-ordinates and other is for the position of the point.
// Basically we are calling structure co-ordinate inside the structure position so we can store the x and y co-ordinates.
// Then I have created a function called area that mutiplies length and breadth and give us the area.
// Length can be easily gotten by substracting the x co-ordinates of the both positions. And that logic is also used to find y co-ordinates.