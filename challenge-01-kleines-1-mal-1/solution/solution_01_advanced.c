#include <stdio.h>
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

	for (row = 1; row <= maxNumber; row++)
	{
		for (col = 1; col <= maxNumber; col++)
		{
			printf("%d\t", col * row);
		}
		printf("\n");
	}
}