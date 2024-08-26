#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//Cambiar valor de las variables 'n' y'm' para determinar el tamaño del arreglo bidimensional
	int m = 6; 
	int n = 6;

	// Declaración del arreglo bidimensional con datos del tipo entero
	int oso[n][m];

	// Recorrer y guardar valores de la matriz
	int k = 1;

	//Variables para los contadores
	int i = 0;
	int j = 0;

	//Variables auxiliares para el recorrido
	int aux = 0;
	
	// Guardar los elementos de la matriz en el arreglo 'oso[][]'
	for ( i = 0; i < n; ++i)
	{
		for ( j = 0; j < m; ++j)
		{
			// 'atoi' = Ascii	To 	Integer
			oso[i][j] = atoi(argv[k]);
			
			printf("  [%2.0d][%2.0d] = %2.0d  ", i+1, j+1, atoi(argv[k]));
			++k; 
		}
		printf("\n");
	}

	//Hacer el recorrido 'z'
	for ( i = 0; i < n; ++i)
		{
			for ( j = aux; j < m; ++j)
			{
				// Recorrer la diagonal inversa de la matriz
				if (i + j == 5 && j != 0)
				{
					printf(" oso [%d][%d] = [%d] \n", i, j, oso[i][j]);
					--j;
					aux = j;
					break;
				}
				else 
				{
					printf(" oso [%d][%d] = [%d] \n", i, j, oso[i][j]);
				}	
			}
			
		}


	return 0;
}








