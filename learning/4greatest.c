#include <stdio.h>

int main()
{

    float a, b, c, d;

    printf("Enter A-->");
    scanf("%f", &a);

    printf("Enter B-->");
    scanf("%f", &b);

    printf("Enter C-->");
    scanf("%f", &c);

    printf("Enter D-->");
    scanf("%f", &d);


if (a>b && a>c && a>d)
{
    printf("%f is the greatest number", a);
}
else if (b>a && b>c && b>d)
{
    printf("%f is the greatest number", b);
}
else if (c>b && c>a && c>d)
{
    printf("%f is the greatest number", c);
}
else{
    printf("%f is the greatest number", d);
}

    return 0;
}