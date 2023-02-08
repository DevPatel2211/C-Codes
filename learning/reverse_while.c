#include <stdio.h>

int main()
{
    int n;

    printf("Type a number -->");
    scanf("%d", &n);


    while (n>=0)
    {
        printf("Your number is %d\n", n--);
    }
    
    return 0;
}