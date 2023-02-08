#include <stdio.h>

int main()
{

    float a, b, c;

    printf("Enter A -->");
    scanf("%f", &a);
    printf("Enter B -->");
    scanf("%f", &b);
    printf("Enter C -->");
    scanf("%f", &c);

    if (a > b && a > c)
    {
        printf("A is the greatest number.");
    }
    else if (b > a && b > c)
    {
        printf("B is the greatest number.");
    }
    else
    {
        printf("C is the greatest number.");
    }

    return 0;
}