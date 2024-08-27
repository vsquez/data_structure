#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	
	//Tamaño del arreglo
	int T = 10;
	int TC = 9;

	int *oso = (int*) malloc(T * sizeof(int));
	int *cuenta = (int*) malloc(TC * sizeof(int));
	/*
	printf("oso = %p\n",oso);
	printf("oso = %p\n",oso + 1);
	printf("oso = %p\n",oso[2]);
	printf("oso = %p\n",oso[3]);
	*/

	for(int i = 0; i < T; i++) 
	{
		oso[i] = (i +2) + i;
	}

	for(int i = 0; i < TC; ++i)
	{
		cuenta[i] = atoi(argv[i + 1]);
	}

	//printf("Tam: %d\n",sizeof(oso)/sizeof(int));
	//printf("oso[0] = %d",*(oso + 0));

	printf("\nArreglo inicial:\n\n\t");
	for(int i = 0; i < T; i++)
	{
		printf("| %2d ",oso[i]);
	}
	printf("|\n");

	printf("\nArreglo invertido:\n\n\t");
	for(int i = T - 1; i >= 0; i--)
	{
		printf("| %2d ",oso[i]);
	}
	printf("|\n");

	printf("\nNumero cuenta:\n\n\t");
	for(int i = 0; i < TC; i++)
	{
		printf("| %2d ",cuenta[i]);
	}
	printf("|\n");

	printf("\nArreglo modificado (Posicion %d modificada):\n\n\t",cuenta[TC - 1]);
	oso[cuenta[TC - 1]] = -1;
	for(int i = 0; i < T; i++)
	{
		printf("| %2d ",oso[i]);
	}
	printf("|\n");

}