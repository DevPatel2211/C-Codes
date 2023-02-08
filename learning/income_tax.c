#include <stdio.h>

int main()
{
    double income, t1, t2, t3, t4, tax;

    printf("Enter You're Income -->");
    scanf("%d", &income);

        t1 = (income - 250000)* 0.05;
        t2 = (income - 500000) * 0.20;
        t3 = (income - 1000000) * 0.30;
        t4 = 0;

        if (income >= 250000 && income <= 500000)
        {
            // printf("You need to pay %d rupees tax", t1);
            tax = tax + 0.05*(income - 250000);
        }

        if (income >= 500000 && income <= 1000000)
        {
            printf("You need to pay %d rupees tax", t2);
        }

        if (income >= 1000000)
        {
            printf("You need to pay %d rupees tax", t3);
        }

        else
        {
            printf("You need to pay %d rupees tax", t4);
        }

        return 0;
}