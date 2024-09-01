#include <stdio.h>
#include <stdlib.h>

struct Alumno {
    char nombre[50];
    int edad;
    int calificacion;
};

int main() {

    int numPersonas;

    printf("Ingrese el número de personas: ");
    scanf("%d", &numPersonas);

    // Asignar memoria para un arreglo de `numPersonas` structs Persona
    struct Alumno* alumnos = (struct Alumno*)malloc(numPersonas * sizeof(struct Alumno));
    
    if (alumnos == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Asignar valores a cada elemento del arreglo
    for (int i = 0; i < numPersonas; i++) {
        printf("Ingrese el nombre de la persona %d: ", i + 1);
        scanf("%s", alumnos[i].nombre);

        printf("Ingrese la edad de %s: ", alumnos[i].nombre);
        scanf("%d", &alumnos[i].edad);

        printf("Ingrese la calificacion de %s: ", alumnos[i].nombre);
        scanf("%d", &alumnos[i].calificacion);
    }

    // Imprimir la información de cada persona
    for (int i = 0; i < numPersonas; i++) {
        printf("Persona %d\n\tNombre: %s \n\tEdad: %d \n\tCalificacion: %d\n", i + 1, alumnos[i].nombre, alumnos[i].edad, alumnos[i].calificacion);
    }

    // Liberar la memoria asignada
    free(alumnos);

    return 0;
}
