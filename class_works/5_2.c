#include <stdio.h>
#include <math.h>

int main()
{

    float i, p, r, n, m, y;

    printf("Calculate Compound Interest.\n");

    printf("Enter P(Principal Value) --> ");
    scanf("%f", &p);

    printf("Enter R(Interest Rate) --> ");
    scanf("%f", &r);

    printf("Enter N(Number of Years) --> ");
    scanf("%f", &n);

    printf("-----------------------------------------------\n");

    m = 1 + (r / 100);
    y = pow(m, n);
    i = (p * y) - p;

    printf("Compound Interest I = %.2f\n", (p * y) - p);

    printf("Net Amount = %.2f\n", i + p);

    return 0;
}