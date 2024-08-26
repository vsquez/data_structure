#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//Cambiar valor de las variables 'n' y'm' para determinar el tamaño del arreglo bidimensional
	int m = 6; 
	int n = 4;

	// Declaración del arreglo bidimensional con datos del tipo entero
	int oso[n][m];

	// Recorrer y guardar valores de la matriz
	int k = 1;

	//Variables para los contadores
	int i = 0;
	int j = 0;

	//Varaiables auxiliares para el recorrido
	int a = 0;
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

	//Hacer el recorrido 'snake'
	for ( i = 0; i < n; ++i)
		{
			for ( j = 0; j < m; ++j)
			{
				aux = abs (a + j);
				printf(" oso [%d][%d] = [%d] \n", i, aux, oso[i][aux]);
				
			}
			a = aux * (- 1);
			
		}


	return 0;
}
