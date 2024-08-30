#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int rows = 5;
	int columns = 5;

	// Declarar un arreglo de punteros a enteros
	int* arr[rows];

	// Crear una matriz dinamica
	for (int i = 0; i < rows; ++i)
	{
		//arr[i] = (int*)malloc(sizeof(int));
		*(arr + i) = (int*)malloc(sizeof(int));
		if (arr[i] == NULL)
		{
			printf("Error");
			return 1;
		}
		// Notacion de subindices
		//*arr[i] = atoi(argv[i + 1]);

		// Notacion de punteros
		// Desreferencia una segunda vez para obtener el contenido del contenido en el arreglo de punteros
		**(arr + i) = atoi(*(argv + (i + 1)));
	}

	// Desplegar informacion
	for (int i = 0; i < rows; ++i)
	{
		printf(" Direccion: %p \nContenido: %p\nValor: %d \n",(arr + i) , *(arr + i), **(arr + i));
	}

	return 0;

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


	for (int i = 0, k = 1; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++i)
		{
			printf(" %c ",argv[k]);
			//**((matrix + i) + j) = atoi(argv[k]);
			++k;
		}
	}


	// Liberar la memoria
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);  // Liberar cada fila
    }
    free(matrix);  // Liberar el arreglo de punteros

	return 0;
}
