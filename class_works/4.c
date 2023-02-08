#include<stdio.h>

int main(){
    
    float fer, cel;

    printf("Enter FERENHIET to convert into CELCIOUS --> ");
    scanf("%f", &fer);
    printf("FERENHIET --> CELCIOUS  ===  %.3f\n\n", (fer-32)*5/9);

    printf("Enter CELCIOUS to convert into FERENHIET --> ");
    scanf("%f", &cel);
    printf("CELCIOUS --> FERENHIET  ===  %.3f", (cel*9/5)+32);


    return 0;
}