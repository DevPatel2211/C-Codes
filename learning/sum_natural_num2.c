#include <stdio.h>

int main()
{
    int i=0,sum=0,n;

    printf("Enter the intiger --> ");
    scanf("%d", &n);

    do
    {
        sum+=i;
        i++;
    } while (i<=n);

    printf("The sum of the intiger --> %d", sum);
    
    return 0;
}