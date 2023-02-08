#include<stdio.h>

int main(){

    int rating;

    printf("Enter your rating (10-15) -->");
    scanf("%d", &rating);

    switch (rating)
    {

    case 10:
    printf("Your rating is 10");
        break;
    case 11:
    printf("Your rating is 11");
        break;
    case 12:
    printf("Your rating is 12");
        break;
    case 13:
    printf("Your rating is 13");
        break;
    case 14:
    printf("Your rating is 14");
        break;
    case 15:
    printf("Your rating is 15");
        break;

    default:
    printf("Invalid rating !!");
        break;
    }

    return 0;
}