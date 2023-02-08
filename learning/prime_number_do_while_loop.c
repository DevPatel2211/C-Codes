// Error --> 2 is not a prime number is showing.
// Error --> 2 is not a prime number is showing.
// Error --> 2 is not a prime number is showing.
// Error --> 2 is not a prime number is showing.
// Error --> 2 is not a prime number is showing.

#include <stdio.h>

int main()
{
    int i=2, n, prime;

    printf("Enter the number for a prime number testing -->");
    scanf("%d", &n);

    do
    {
        if (n%i==0)
        {
            prime=1;
            break;
        }
        
        i++;
    } while (i<=n);
    
    if (prime==1)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }
    return 0;
}