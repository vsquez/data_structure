#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//Cambiar valor de las variables 'n' y'm' para determinar el tamaño del arreglo bidimensional
	int m = 4; 
	int n = 3;

	// Declaración del arreglo bidimensional con datos del tipo entero
	int oso[n][m];

	// Recorrer y guardar valores de la matriz
	int k = 1;

	//Variables para los contadores
	int i = 0;
	int j = 0;


	
	// Guardar los elementos de la matriz en el arreglo 'oso[][]'
	for ( i = 0; i < n; ++i)
	{
		for ( j = 0; j < m; ++j)
		{
			// 'atoi' = Ascii	To 	Integer
			oso[i][j] = atoi(argv[k]);
			
			printf("  [%d][%d] = %2.0d  ", i, j, atoi(argv[k]));
			++k; 
		}
		printf("\n");
	}

	//Realiza el recorrido hacia atras
	for ( i = (n - 1) ; i >= 0; --i)
		{
			for ( j = (m - 1); j >= 0 ; --j)
			{
				
					printf(" oso [%d][%d] = [%d] \n", i, j, oso[i][j]);
					
			}
			
		}


	return 0;
}








