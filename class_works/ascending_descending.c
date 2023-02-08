#include <stdio.h>

int main()
{

    int i, na, nd;


    printf("---------------------------------------------------------------------------\n");
    printf("Enter the number for first n number's ascending order-->");
    scanf("%d", &na);

    printf("0");

    for (i = 1; i <= na; i++)
    {
        printf(" , %d", i);
    }



    printf("\n");
    printf("---------------------------------------------------------------------------\n");



    printf("Enter the number for first n number's descending order-->");
    scanf("%d", &nd);

    printf("%d", nd);

    for (i = nd - 1; i >= 0; i--)
    {
        printf(" , %d", i);
    }
    printf("\n");
    printf("---------------------------------------------------------------------------\n");

    return 0;
}