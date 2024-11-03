#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 8;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuess = 0;

    while (guess != secretNumber && outOfGuess == 0)
    {
        if (guessCount < guessLimit)
        {
            printf("Enter your gess number: ");
            scanf("%d", &guess);
            guessCount++;
        }
        else
        {
            outOfGuess = 1;
        }
    }

    if (outOfGuess == 1)
    {
        printf("You lose the game!\n");
    }
    else
    {
        printf("You Win!\n\n\n");
    }

    return 0;
}
