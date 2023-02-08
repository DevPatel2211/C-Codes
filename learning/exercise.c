#include <stdio.h>

int main(){
        
    int person_age;

    printf("Enter your age --> \n");
    scanf("%d", &person_age);

    if (person_age >= 5 && person_age <= 18)
    {
        printf("You're eligible for kids zone");
    }

    else
    {
        printf("You're not eligible for kids zone");
    }

    return 0;
}