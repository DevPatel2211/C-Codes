#include <stdio.h>

int main()
{

    int a, b, choice;


    printf("1 for addition--> \n");
    printf("2 for substaraction--> \n");
    printf("3 for multiplication--> \n");
    printf("4 for dividion--> \n");
    printf("enter choice --> ");
    scanf("%d", &choice);

    
    printf("Add A --> ");
    scanf("%d", &a);

    printf("Add B --> ");
    scanf("%d", &b);

    
    switch (choice)
    {
    case 1:
        printf("A + B = %d", a + b);
        break;

    case 2:
        printf("A - B = %d", a - b);
        break;

    case 3:
        printf("A * B = %d", a * b);
        break;

    case 4:
        printf("A / B = %d", a / b);
        break;

    default:
    printf("You need to exit");
    }

    return 0;
}