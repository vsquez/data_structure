#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	
	//Tamaño del arreglo
	int T = 10;

	int *oso = (int*) malloc(T * sizeof(int));
	int *cuenta = (int*) malloc(T * sizeof(int));
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

	//printf("Tam: %d\n",sizeof(oso)/sizeof(int));
	//printf("oso[0] = %d",*(oso + 0));

	printf("\nArreglo inicial:\n\n\t");
	for(int i = 0; i < T; i++)
	{
		printf("| %d ",oso[i]);
	}
	printf("|\n");

	printf("\nNumero cuenta:\n\n\t");
	for(int i = 0; i < T; i++)
	{
		printf("| %d ",cuenta[i]);
	}
	printf("|\n");
}