#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number for First n natural number sequence -->");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Your number is %d\n", i);
    }
    
    return 0;
}