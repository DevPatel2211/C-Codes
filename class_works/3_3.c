#include <stdio.h>

int main()
{

    float kilobyte, megabyte;

    printf("Enter KILOBYTE to convert into MEGABYTE --> ");
    scanf("%f", &kilobyte);
    printf("KILOBYTE --> MEGABYTE  ===  %.3f\n\n", kilobyte / 1024);

    printf("Enter MEGABYTE to convert into KILOBYTE --> ");
    scanf("%f", &megabyte);
    printf("MEGABYTE --> KILOBYTE  ===  %.3f", megabyte * 1024);


    return 0;
}