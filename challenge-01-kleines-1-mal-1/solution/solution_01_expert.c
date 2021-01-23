resu#include <stdio.h>
#include <stdlib.h>

// Deklaration unserer Hilfsmethode, damit sie in der main() bekannt ist.
void createMultiplicationTable(int maxNumber);


int main(void)
{
	int inputNumber;

	printf("Bitte gib eine Zahl ein: ");
	scanf("%d", &inputNumber);

	printf("\n");

	createMultiplicationTable(inputNumber);  //Aufruf unserer Hilfsmethode

	return EXIT_SUCCESS;
}


// Definition (=Implementierung) unserer Hilfsmethode, welche das kleine 1x1
// berechnet und auf der Konsole ausgibt.
void createMultiplicationTable(int maxNumber)
{
	int col, row;

	if (maxNumber > 50)
	{
		maxNumber = 50;
	}

	// Zählervariablen bereits bei 0 starten
	for (row = 0; row <= maxNumber; row++)
	{
		for (col = 0; col <= maxNumber; col++)
		{
			int result;

			if (col + row == 0)
			{
				result = 0;
			}
			else if (row == 0)
			{
				result = col;
			}
			else if (col == 0)
			{
				result = row;
			}
			else
			{
				result = col * row;
			}

			printf("%d\t", result);
		}
		printf("\n");
	}
}