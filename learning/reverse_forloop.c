#include <stdio.h>

int main()
{
    int i ,n;

    printf("Enter the number-->");
    scanf("%d", &n);

    for (i = n; n>=0 ; n--)
    {
        printf("Your number is --> %d\n", n);
    }
    

    return 0;
}