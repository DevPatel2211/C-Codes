#include <stdio.h>

int main()
{

    float pi = 3.14;
    int r;
    int h;

    printf("enter the radius of circle -> ");
    scanf("%d", &r);

    printf("enter the height of the cylinder -> ");
    scanf("%d", &h);

    printf("\n the area of the circle is -> %f", pi * r * r);
    printf("\n the area of the cyclinder is -> %f", pi * r * r * h);

    return 0;
}