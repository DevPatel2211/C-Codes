#include <stdio.h>
#include <math.h>

int main()
{

    float r, l, lr, wr, v, base, l1, l2;
    float pi = 3.14;

    printf("Enter radius to calculate The area of a circle -->");
    scanf("%f", &r);
    printf("The parameter of a circle --> %.2f \n", 2 * pi * r);
    printf("The area of a circle --> %.2f \n", pi * pow(r, 2));
    printf("----------------------------------------------\n");

    printf("Enter length to calculate The area of a square -->");
    scanf("%f", &l);
    printf("The parameter of a square --> %.2f\n", 4 * l);
    printf("The area of a square --> %.2f\n", pow(l, 2));
    printf("----------------------------------------------\n");

    printf("Enter length and width to calculate The area of a Rectangle -->\n");
    printf("length-->");
    scanf("%f", &lr);
    printf("width-->");
    scanf("%f", &wr);
    printf("The parameter of a Rectangle --> %.2f\n", 2 * (lr + wr));
    printf("The area of a Rectangle --> %.2f\n", lr * wr);
    printf("----------------------------------------------\n");

    printf("Enter base and height to calculate The area of a Triangle -->\n");
    printf("base-->");
    scanf("%f", &base);
    printf("height-->");
    scanf("%f", &v);
    printf("length - 1 -->");
    scanf("%f", &l1);
    printf("length - 2 -->");
    scanf("%f", &l2);
    printf("The parameter of a triangle --> %.2f\n", l1 + l2 + base);
    printf("The area of a triangle --> %.2f\n", 0.5 * base * v);
    printf("----------------------------------------------\n");

    return 0;
}