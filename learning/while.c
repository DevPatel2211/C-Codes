#include <stdio.h>

int main()
{

    int a = 0;

    printf("Enter the number -->");
    scanf("%d", &a);
    while (a <= 20)
    {
        if (a >= 10)
        {
            printf("Your number is %d\n", a++);
        }
    }

    return 0;
}