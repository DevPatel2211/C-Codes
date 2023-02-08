#include<stdio.h>

int main(){

    int a;

    printf("enter the number -->");
    scanf("%d", &a);

    (a>10) ? printf("a is greater than 10") : printf("a is less than 10");

    return 0;
}