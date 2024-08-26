#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int tam = 4;

	// Declaración del arreglo
	int n_filas = tam, n_columnas = tam;
	int oso[n_filas][n_columnas];

	// Declaración de contadores
	int i = 0, j = 0, v = 1;

	// Guardar los elementos de la matriz en el arreglo 'oso[][]' + (debug)
		// Desde linea de comando
	printf("\n\tMatriz Original:\n\n");
	for ( i = 0; i < n_filas; ++i)
	{
		printf("\t");
		for ( j = 0; j < n_columnas; ++j)
		{
			// 'atoi' = Ascii	To 	Integer
			oso[i][j] = atoi(argv[v]);
			
			//printf("  [%1d][%1d] = %2d  ", i, j, oso[i][j]);
			printf("  %2d  ", oso[i][j]);
			++v; 
		}
		printf("\n");
	}

	int aux_j = 2;

	printf("[%0.2d][%0.2d] = %0.2d\n\n", n_filas - 1, n_columnas -1, oso[n_filas - 1][n_columnas -1]);
	for ( i = n_filas - 1; i >= 0;--i)
	{
		for( j = aux_j; j >= 0;--j)
		{
			if( (i + j)%3 == 0 )
			//if( (i + j)/3 == 1)
			{
				printf("* [%0.2d][%0.2d] = %0.2d\n\n", i, j, oso[i][j]);
				++j;
				aux_j = j;
				if (i != 0)
				{
					break;
				}
			}
			else
			{
				printf("- [%0.2d][%0.2d] = %0.2d\n\n", i, j, oso[i][j]);
			}

		}
	}

	return 0;
}