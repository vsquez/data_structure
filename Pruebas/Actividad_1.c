#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir la estructura
struct Persona {
    char nombre[50];
    int edad;
    int calificacion;
};

// Funcion para validar entrada de usuario (INT)
int esValido(int dato, int min, int max)
{
    if(dato > min && dato <= max)
        return 0;
    else
        return 1;
}

float calcular_promedio(int sumatoria, int n)
{
    return sumatoria/n;
}

int main() {
    struct Persona *personas = NULL;  // Puntero inicializado a NULL
    float acum_edad = 0, acum_calif = 0;
    int n = 0;  // Contador de estructuras asignadas
    char continuar;

    // Preguntar si desea continuar
    printf("¿Desea ingresar otra persona? (s/n): ");
    scanf(" %c", &continuar);

    while (continuar == 's' || continuar == 'S')
    {
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
        do
        {
            printf("Ingrese la edad de %s: ", personas[n-1].nombre);
            scanf("%d", &personas[n-1].edad);
            getchar();
        }while( (esValido(personas[n-1].edad,0,200) == 1) );

        do
        {
            printf("Ingrese la calificacion de %s: ", personas[n-1].nombre);
            scanf("%d", &personas[n-1].calificacion);
            getchar();
        }while( (esValido(personas[n-1].calificacion,0,10) == 1) );

        acum_edad += personas[n-1].edad;
        acum_calif += personas[n-1].calificacion;

        // Preguntar si desea continuar
        printf("¿Desea ingresar otra persona? (s/n): ");
        scanf(" %c", &continuar);

    }

    // Mostrar los datos ingresados
    printf("\nDatos ingresados:\n");
    for (int i = 0; i < n; i++) {
        printf("Nombre: %s \nEdad: %d \nCalificacion: %d \n",
               personas[i].nombre, personas[i].edad, personas[i].calificacion);
    }

    // Mostrar promedios
    printf("\n\nPromedio de edad: %2.2f\n",calcular_promedio(acum_edad,n));
    printf("Calificacion del grupo: %2.2f\n",calcular_promedio(acum_calif,n));

    // Liberar la memoria asignada
    free(personas);

    return 0;
}
