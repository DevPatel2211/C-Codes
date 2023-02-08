#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n;

    printf("Enter the number -->");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("The sum of the intigers --> %d", sum);

    return 0;
}