#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int col, row;

	for (row = 1; row <= 10; row++)
	{
		for (col = 1; col <= 10; col++)
		{
			printf("%d\t", col * row);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}