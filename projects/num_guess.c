// NUMBER IS CHANGING FREQUENTLY IN THE MIDDLE OF THE GAME. ==> Solved
// AFTER TWO INPUTS 1ST OUTPUT COME.
// GAME CONTINUE OR EXIT DOESN'T WORK.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display();
void gamestartorend();

int i, n, number, guess = 1;
int game;

int main()
{
    srand(time(0));
    number = rand() % 100 + 1; // PICKING RANDOM NUMBERS DIRECTLY BY COMPUTER BETWEEN 1-100.

    display();
    gamestartorend();

    return 0;
}

void display()
{
    for (i = 1; i < 101; i++)
    {

        printf("You need to guess numbers between 1-100.\n");
        // printf("The number is %d\n", number);
        printf("Guess the Number -->");
        scanf("%d", &n);

        if (n > 0 && n < 101)
        {
            if (n > number)
            {
                printf("Lower Number Please\n\n");
                guess++;
                continue;
            }
            else if (n < number)
            {

                printf("Greater Number Please\n\n");
                guess++;
                continue;
            }
            else
            {
                printf("You're correct.\n");
                printf("You guessed the number in %d attempts\n\n\n", guess);
                printf("to continue --> Press 1\n");
                printf("to exit --> Press 0\n");
                printf("0 or 1 -->");
                scanf("%d", &game);

                if (game == 1)
                {
                    printf("Game Continued -->");
                    display();
                }
                else
                {
                    printf("Thanks for playing game");
                    break;
                }
            }
        }
        else
        {
            printf("You're number is not valid.\n");
            guess++;
            continue;
        }
    }
}

void gamestartorend()
{
    printf("to continue --> Press 1\n");
    printf("to exit --> Press 0\n");
    printf("0 or 1 -->");
    scanf("%d", &game);

    if (game == 1)
    {
        printf("Game Continued -->");
        display();
    }
    else
    {
        printf("Thanks for playing game");
    }
}