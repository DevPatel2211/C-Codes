#include <stdio.h>

int main()
{
    int i , n, factorial=1;

    printf("Type a number to find his factorial --> ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf(" %d ! = %d", n, factorial);

    return 0;
}