#include<stdio.h>

int main(){
    int i=0;
    int n;

    printf("Enter the number for First n natural number sequence -->");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i++);
    } while (i<=n);
    

    return 0;
}