#include<stdio.h>

int main(){
    
    float min, hour;

    printf("Enter HOUR to convert into MINUTES --> ");
    scanf("%f", &hour);
    printf("HOUR --> MINUTES  ===  %f\n\n", hour*60);

    printf("Enter MINUTES to convert into HOURS --> ");
    scanf("%f", &min);
    printf("MINUTES --> HOUR  ===  %f", min/60);


    return 0;
}