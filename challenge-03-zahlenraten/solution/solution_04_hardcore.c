#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>


int randomNumber(int maxNumber);
int scanInt(int minNumber, int maxNumber);


int main()
{
    int maxNumber;
    int tries = 0;

    printf("Bitte gib den Zahlenbereich ein:");

    //scanf("%d", &maxNumber);

    maxNumber = scanInt(1, INT_MAX);

    int myNumber = randomNumber(maxNumber);

    int maxTries = getMaxTries(maxNumber);
    
    int guessedNumber;

    printf("Vielen Dank. Du bekommst %d Versuche.\n", maxTries);

    while (myNumber != guessedNumber && tries < maxTries)
    {
        tries++;

        printf("%d. Versuch - bitte Raten? ", tries);
        //scanf("%d", &guessedNumber);
        guessedNumber = scanInt(1, maxNumber);

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

    if (tries >= maxTries && guessedNumber != myNumber)
    {
        printf("GAME OVER! Deine %d Versuche sind verbraucht!", maxTries);
    }

    return EXIT_SUCCESS;
}


int getMaxTries(int maxNumber)
{
    int maxTries = log10(maxNumber) / log10(2);

    maxTries = maxTries == 0 ? 1 : maxTries;

    return maxTries;
}


int randomNumber(int maxNumber)
{
    srand(time(NULL));
    return rand() % maxNumber + 1;
}


int scanInt(int minNumber, int maxNumber)
{
    int inputNumber;

    while (1)
    {
        int result = scanf("%d", &inputNumber);

        if (result == 1)
        {
            if (inputNumber >= minNumber && inputNumber <= maxNumber)
            {
                return inputNumber;
            }
            else
            {
                printf("Zahl lag außerhalb des gültigen Zahlenbereichs %d - %d!\n", minNumber, maxNumber);
                printf("Neue Eingabe: ");
            }
        }
        else
        {
            printf("Bitte nur ganze Zahlen eingeben!\n");
            printf("Neue Eingabe: ");
            while (getchar() != '\n');
        }

    }
}
