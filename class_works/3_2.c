#include<stdio.h>

int main(){
    
    float gram, kilogram;
    
    printf("Enter GRAM to convert into KILOGRAM --> ");
    scanf("%f", &gram);
    printf("Gram --> Kilogram  ===  %f\n\n", gram/1000);

    printf("Enter KILOGRAM to convert into GRAM --> ");
    scanf("%f", &kilogram);
    printf("Kilogram --> Gram  ===  %f", kilogram*1000);

    return 0;
}