#include <stdio.h>

int main()
{
    int students = 2;
    int subjects = 3;

    int a[students][subjects];

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter the marks of sub %d for student %d : ", j + 1, i + 1);
            scanf("%d", &a[students][subjects]);
        }
    }

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("The marks of sub %d for student %d : %d", j + 1, i + 1, a[students][subjects]);
        }
    }

    return 0;
}