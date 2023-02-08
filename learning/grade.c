#include <stdio.h>

int main()
{

    int grade;

    printf("type marks -->");
    scanf("%d", &grade);

    if (grade > 89 && grade < 101)
    {
        if (grade < 96)
        {
            printf("Grade --> A");
        }

        else
        {
            printf("Grade --> A++");
        }
        
    }
    else if(grade > 79 && grade < 91)
    {
        printf("GRADE - B");
    }
    else if(grade > 69 && grade < 81)
    {
        printf("GRADE - C");
    }
    else if(grade > 59 && grade < 71)
    {
        printf("GRADE - D");
    }
    else
    {
        printf("GRADE - E");
    }
    return 0;
}
