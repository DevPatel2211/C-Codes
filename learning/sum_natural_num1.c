#include <stdio.h>

int main()
{
    int i=0, sum=0, n;

    printf("Enter the intiger-->");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum +=i;
    }
    printf("The sum of the intigers are --> %d", sum);
    return 0;
}