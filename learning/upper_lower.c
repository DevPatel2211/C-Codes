#include<stdio.h>

int main(){
    char character;

    printf("Enter the character --> ");
    scanf("%c", &character);

    if (character>=65 && character<=90)
    {
        printf("%c is UPPERCASE", character);
    }
    else if(character>=97 && character<=122)
    {
        printf("%c is LOWERCASE", character);
    }
    else
    {
        printf("%c is neither LOWERCASE nor UPPERCASE");
    }
        
     return 0;
}