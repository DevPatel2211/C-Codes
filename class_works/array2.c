#include <stdio.h>

int main()
{

    int r, c, i, j, k, a[10][10], b[10][10], multi[10][10];

    printf("Enter the number of raws --> ");
    scanf("%d", &r);
    printf("Enter the number of columns --> ");
    scanf("%d", &c);

    printf("Enter the elements of 1st arrays : ");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a%d%d --> ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 1st arrays : ");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter b%d%d --> ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Multiplication of the elements of 1st arrays : ");

    for (i = 0; i <= r; i++)
    {
        for (j = 0; j < c; j++)
        {
            multi[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                multi[i][j] += a[i][k] * b[k][i];
            }
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
