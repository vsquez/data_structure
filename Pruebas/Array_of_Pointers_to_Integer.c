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

	// Liberar la memoria, CONFIAR EN QUE SE LIBERA LA MEMORIA
    for (int i = 0; i < rows; i++)
    {
        //free(arr[i]);  // Liberar cada fila
        free(*(arr + i));
    }
    free(arr);  // Liberar el arreglo de punteros
    printf("Liberamos memoria!");

	return 0;
}
