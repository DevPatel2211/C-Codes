#include <stdio.h>

int main()
{
    int i;

    printf("Enter the value of i --> ");
    scanf("%d", &i);

    while (i > 0)
    {

        i++;
        if (i == 8)
        {
            printf("Your number is %d\n", i);
            i--;
            continue;
        }
        else
        {
            printf("Your number is %d\n", i);
        }
    }
    return 0;
}