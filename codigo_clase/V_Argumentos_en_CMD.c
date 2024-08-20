//Autor: Victoria Gomez
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i,j;
    char *num = argv[1];

    //Para recorrer TODOS los argumentos del programa
    for (j=0; j< argc; j++)
        fprintf(stdout, "arg[%d] = %s \n", j, argv[j]);

    //Imprime el PRIMER argumento después del nombre
    //fprintf(stdout, "*argv[1] = %s \n", argv[1]);

    //Recorre caracter a caracter del PRIMER argumento
    for(i=0; i < strlen(argv[1]); i++)
        fprintf(stdout, "num[%d] = %c \n", i, num[i]);

    return 0;
}
