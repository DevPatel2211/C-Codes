#include<stdio.h>

int main(){
    
    float rupee, dollar;
    
    printf("Enter DOLLAR to convert into RUPEE --> ");
    scanf("%f", &dollar);
    printf("DOLLAR --> RUPEE  ===  %f\n\n", dollar*48);

    printf("Enter RUPEE to convert into DOLLAR --> ");
    scanf("%f", &rupee);
    printf("RUPEE --> DOLLAR  ===  %f", rupee/48);


    return 0;
}