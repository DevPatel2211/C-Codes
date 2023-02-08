#include<stdio.h>

float celc(float fer);
// float fer(float celc);

int main(){
    int celc, fer;

    printf("Enter the value of fer to measure celc --->");
    scanf("%f", &fer);
    printf("CEL --> %f", celc(fer));

    // printf("Enter the value of celc to measure fer --->");
    // scanf("%f", &celc);
    // printf("FER --> %f", fer(celc));

    return 0;
}

float celc(float fer){
    float result;
    result = (fer - 32)*5/9;
    return result;
}