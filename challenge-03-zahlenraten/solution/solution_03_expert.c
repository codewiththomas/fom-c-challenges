#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


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

    int guessedNumber;

    while (myNumber != guessedNumber)
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

    return EXIT_SUCCESS;
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
