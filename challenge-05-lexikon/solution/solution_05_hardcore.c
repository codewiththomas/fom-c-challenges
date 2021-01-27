/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

#include "encyclopedia.h"


int main()
{

    addArticle("Mein erster Titel", "Hier kommt eine Beschreibung für mein erstes Thema rein. Ihr habt hier natürlich sinnvolle Sachen hingeschrieben.");
    addArticle("Tdsfitel", "Beschreibung");
    addArticle("sd", "Beschreibung");
    addArticle("3353", "Beschreibung");
    addArticle("sdg", "Beschreibung");
    addArticle("sdgew", "Beschreibung");

    int count = getArticleCount();  // unsere maximale Themenzahl
    int i;                          // Laufvariable für die Schleifen
    int input;                      // vom Nutzer gewähltes Thema

    do 
    {
        printf("Wähle ein Themengebiet.\n");
        printf("=======================\n");
        printf("\n");

        for (i = 0; i < count; i++)
        {
            printf("\t%d\t", i + 1);
            printArticleTitle(i + 1);
            printf("\n");
        }

        printf("\n\t0\tBeenden\n");
        printf("Bitte wähle ein Themengebiet: ");

        scanf("%d", &input);


        switch (input)
        {
        case 0:
            printf("Programm wird beendet...\n");
            break;
        default:
            //Diese if-Anweisung war in der Aufgabe nicht gefordert
            if (input >= 1 && input <= count)
            {
                //printf("Es wurde Thema%d ausgewählt\n", input);
                printf("\n");
                printArticleDescription(input);
                printf("\n\n\n");
            }
            else
            {
                printf("Ungültiges Themengebiert!\n");
            }
            break;
        }
    } while (input != 0);


    return EXIT_SUCCESS;
}


