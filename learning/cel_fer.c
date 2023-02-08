#include <stdio.h>

int main()
{

    float cel, fer;

    printf("enter the celcius ->");
    scanf("%f", &cel);

    printf("celcius -> ferenhiet :: %f \n\n", 1.8 * cel + 32);

    printf("enter the ferenhiet ->");
    scanf("%f", &fer);

    printf("ferenhiet -> celcius :: %f", (fer-32)*5/9);

    return 0;
}
