#include <stdio.h>
int main()
{
    int n;
    float b, h, l, r;
    printf("Select an option:\n 1.Area of triangle.\n 2.Area of rectangle.\n 3.Area of circle.\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the base and height of a triangle: ");
        scanf("%f%f", &b, &h);
        printf("Area of triangle:%f", (b * h) / 2);
        break;
    case 2:
        printf("Enter the length and breadth of a triangle: ");
        scanf("%f%f", &l, &b);
        printf("Area of rectangle: %f", l * b);
        break;
    case 3:
        printf("Enter the radius of the circle: ");
        scanf("%f", &r);
        printf("Area of circle: %f", 3.14 * r * r);
        break;
    default:
        printf("Enter a correct number.");
        break;
    }
}