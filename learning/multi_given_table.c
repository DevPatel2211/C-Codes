#include <stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter the number to make table-->");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, n*i);
        sum = sum + (n*i);
    }
    
    printf("The sum of the intigers are --> %d", sum);

    return 0;
}