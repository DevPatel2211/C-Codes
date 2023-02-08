#include <stdio.h>

int main()
{

    int r, c, a[10][10], b[10][10], sum[10][10], i, j;

    printf("Enter the numbers of rows -- > ");
    scanf("%d", &r);
    printf("Enter the numbers of columns -- > ");
    scanf("%d", &c);

    printf("Enter the Elements for 1st matrics.\n");

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter a%d%d  --> ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the Elements for 2nd matrics.\n");

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter b%d%d  --> ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum of two matrics : \n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);

            if (j == c - 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}