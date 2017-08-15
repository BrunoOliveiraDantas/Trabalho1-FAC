#include <stdio.h>

int main(int argc, char const *argv[]) {
    int i = 2;

    printf("# de parametros: %d\n", argc-1);
    printf("Nome do executavel: ");
    while(argv[0][i] != '\0'){
        printf("%c", argv[0][i]);
        i++;
    }

    printf("\n");

    for(i = 1; i < argc; i++)
        printf("Parametro #%d: %s\n", i, argv[i]);

    return 0;
}
