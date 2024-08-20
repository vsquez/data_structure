#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i,j;
    char *num = argv[1];

    for (j=0; j<= argc; j++)
        fprintf(stdout, "arg[%d] = %c \n", j, num[j]);
    //fprintf(stdout, "*argv[1] = %s \n", argv[1]);

    for(i=0; i < strlen(argv[1]); i++)
        fprintf(stdout, "num[%d] = %c \n", i, num[i]);

    return 0;
}
