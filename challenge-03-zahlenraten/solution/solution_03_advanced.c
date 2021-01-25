#include <stdio.h>
#include <stdlib.h>


int randomNumber(int maxNumber);


int main()
{
    int maxNumber;
    int tries = 0;

    printf("Bitte gib den Zahlenbereich ein:");

    scanf("%d", &maxNumber);

    int myNumber = randomNumber(maxNumber);

    int guessedNumber;

    while (myNumber != guessedNumber)
    {
        tries++;

        printf("%d. Versuch - bitte Raten? ", tries);
        scanf("%d", &guessedNumber);

        if (guessedNumber < myNumber)
        {
            printf("Leider falsch. Meine Zahl ist größer!\n");
        }
        else if (guessedNumber > myNumber)
        {
            printf("Leider falsch. Meine Zahl ist kleiner!\n");
        }
        else
        {
            printf("WOW, Richtig!\n");
        }
    }

    return EXIT_SUCCESS;
}


int randomNumber(int maxNumber)
{
    srand(time(NULL));
    return rand() % maxNumber + 1;
}
