#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2;
    int columns = 5;

    // Crear la matriz dinámica
    int **matrix = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(columns * sizeof(int));
    }

    // Leer valores desde la línea de comandos
    printf("Introduce los valores para la matriz (%d filas, %d columnas):\n", rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Valor para matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);  // Leer el valor y almacenarlo en la matriz
        }
    }

    // Imprimir la matriz para verificar
    printf("\nMatriz introducida:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Liberar la memoria
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);  // Liberar cada fila
    }
    free(matrix);  // Liberar el arreglo de punteros

    return 0;
}
