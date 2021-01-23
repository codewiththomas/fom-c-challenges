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

	maxNumber = maxNumber > 50 ? 50 : maxNumber;

	int array[maxNumber + 1][maxNumber + 1];

	// Zählervariablen bereits bei 0 starten
	for (row = 0; row <= maxNumber; row++)
	{
		for (col = 0; col <= maxNumber; col++)
		{
			int result = (col + row == 0 ? 0 : (row == 0 ? 1 : row) * (col == 0 ? 1 : col));

			array[col][row] = result;

		}
	}

	row = 0;
	while (row <= maxNumber)
	{
		col = 0;
		while (col <= maxNumber)
		{
			printf("%d\t", array[col][row]);
			col++;
		}
		printf("\n");
		row++;
	}
}