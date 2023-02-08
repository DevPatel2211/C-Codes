#include <stdio.h>

int main()
{

    int age;

    printf("Enter your age to find out weather you're eligible for voting or not -->");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You're eligible for voting.");
    }
    else
    {
        printf("You're not eligible for voting.");
    }

    return 0;
}