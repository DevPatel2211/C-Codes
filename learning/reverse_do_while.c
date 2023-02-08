#include <stdio.h>

int main()
{
    int i=0, n;

    printf("Type a number --> ");
    scanf("%d", &n);

    do
    {
        printf("Your number is %d\n", n--);
    } while (i<=n);
    
    return 0;
}