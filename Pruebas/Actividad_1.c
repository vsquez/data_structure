#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir la estructura
struct Persona {
    char nombre[50];
    int edad;
    int calificacion;
};

int main() {
    struct Persona *personas = NULL;  // Puntero inicializado a NULL
    int n = 0;  // Contador de estructuras asignadas
    char continuar;

    do {
        // Incrementar el contador
        n++;

        // Reasignar memoria para almacenar una nueva estructura
        struct Persona *temp = realloc(personas, n * sizeof(struct Persona));
        if (temp == NULL) {
            printf("Error al asignar memoria.\n");
            free(personas);  // Liberar memoria ya asignada
            return 1;
        }
        personas = temp;

        // Capturar los datos para la nueva Persona
        printf("Ingrese el nombre del alumno %d: ", n);
        scanf("%s", personas[n-1].nombre);
        printf("Ingrese la edad de %s: ", personas[n-1].nombre);
        scanf("%d", &personas[n-1].edad);
        printf("Ingrese la calificacion de %s: ", personas[n-1].nombre);
        scanf("%d", &personas[n-1].calificacion);

        // Preguntar si desea continuar
        printf("¿Desea ingresar otra persona? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    // Mostrar los datos ingresados
    printf("\nDatos ingresados:\n");
    for (int i = 0; i < n; i++) {
        printf("Nombre: %s \nEdad: %d \nCalificacion: %d \n",
               personas[i].nombre, personas[i].edad, personas[i].calificacion);
    }

    // Liberar la memoria asignada
    free(personas);

    return 0;
}
