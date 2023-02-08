#include <stdio.h>

int main()
{
    int i, n, prime = 0;

    printf("Enter a number for a prime number test -->");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1 && n !=2)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }

    return 0;
}