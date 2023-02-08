#include<stdio.h>

float average(int a, int b, int c);

int main(){
    
    int a, b, c;

    printf("Enter A-->");
    scanf("%d", &a);
    printf("Enter B-->");
    scanf("%d", &b);
    printf("Enter C-->");
    scanf("%d", &c);

    printf("Average --> %f", average(a, b, c));

    return 0;
}

float average(int a, int b, int c){
    float result;
    result = (float)(a+b+c)/3;
    return result;
}