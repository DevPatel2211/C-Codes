#include<stdio.h>

int main(){

    float a, b;

    printf("Enter A --> ");
    scanf("%f", &a);

    printf("Enter B --> ");
    scanf("%f", &b);
    printf("\n\n");

    printf("A + B = %f\n", a+b);
    printf("A - B = %f\n", a-b);
    printf("A * B = %f\n", a*b);
    printf("A / B = %f\n", a/b);


    return 0;
}