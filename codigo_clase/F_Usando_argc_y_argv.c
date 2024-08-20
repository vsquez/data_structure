//Autor: Felipe Vásquez

// Archivos de cabecera
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaración de main function para usar 'argumentos por linea de comando'
int main(int argc, char *argv[])
{
	int i;							// Contador
	char *first_string = argv[1];	// Apuntador al primer argumento de *argv[]

	fprintf(stdout, "\n\n");

	// Impresión del numero de argumentos que fue ingresado
	fprintf(stdout, "Imprime el numero de argumentos en argv (usando argc)\n");
	fprintf(stdout, "# argumentos: %d \n", argc);

	fprintf(stdout, "\n\n");

	// Recorremos, del Primer argumentos, la cadena caracter por caracter
	fprintf(stdout, "Recorre caracter x caracter del primer argumentos\n");
	for(i = 0; i < strlen(first_string); ++i)
	{
		// Imprime el valor de la posición i en la cadena first_string (first_string[i])
		fprintf(stdout, "*first_string[%d] = %c \n", i, first_string[i]);
	}

	fprintf(stdout, "\n\n");

	// Recorremos todos los argumentos ingresados
	fprintf(stdout, "Recorre todos los argumentos de *argv[]\n");
	for(i = 0; i < argc; ++i)
	{
		// Imprime el valor 'i' en el arreglo de cadenas de texto (string array)
		fprintf(stdout, "*argv[%d] = %s \n", i, argv[i]);
	}

	return 0;
}