#include <stdio.h>

int main()
{

    float p, r, n;

    printf("Calculate Simple Interest\n");

    printf("Enter P(Principal Value) --> ");
    scanf("%f", &p);

    printf("Enter R(Interest Rate) --> ");
    scanf("%f", &r);

    printf("Enter N(Number of Years) --> ");
    scanf("%f", &n);

    printf("\n\n");
    printf("Simple Interest I = %.2f\n", p * r * n / 100);

    float i = p * r * n / 100;

    printf("Net Amount = %.2f", i + p);

    return 0;
}