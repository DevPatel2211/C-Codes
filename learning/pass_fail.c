#include <stdio.h>

int main()
{

    int phy, che, mat;
    float totalper;

    printf("Physics Marks--> ");
    scanf("%d", &phy);

    printf("Chemistry Marks--> ");
    scanf("%d", &che);

    printf("Maths Marks--> ");
    scanf("%d", &mat);



    totalper = (phy + che + mat) / 3;
    if (phy >= 33 && che >= 33 && mat >= 33 && totalper >= 40)
    {
        printf("You're pass \n");
    }
    else
    {
        printf("You're fail \n");
    }


    return 0;
}