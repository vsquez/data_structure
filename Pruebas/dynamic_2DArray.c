#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int rows = 2;
	int columns = 5;

	int* arr[rows];

	for (int i = 0; i < rows; ++i)
	{
		*(arr + i) = (int*)malloc(sizeof(int));
		**(arr + i) = i;
	}

	for (int i = 0; i < rows; ++i)
	{
		printf(" %d ", **(arr + i));
	}

	int **matrix = (int **) malloc(rows * sizeof(int *));
	/*
	printf(" %d ", matrix[0]);
	printf(" %d ", **matrix);
	printf(" %p ", *matrix);
	printf(" %p ", matrix);
	*/

	for (int i = 0; i < rows; i++)
	{
		*(matrix + i) = (int *) malloc(columns * sizeof(int));
	}

	for (int i = 1; i < argc; ++i)
	{
		printf("%c",argv[i]);
	}

	return 0;

	for (int i = 0, k = 1; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++i)
		{
			printf(" %c ",argv[k]);
			//**((matrix + i) + j) = atoi(argv[k]);
			++k;
		}
	}

	/*
	printf("\n\tMatrix: \n");
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf(" %d ", matrix[i][j] );
		}
		printf("\n");
	}
	*/

	// Liberar la memoria
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);  // Liberar cada fila
    }
    free(matrix);  // Liberar el arreglo de punteros

	return 0;
}
