/*Utilize um arquivo .c/.h com as funções de entrada e saída*/

#include <stdio.h>
#include "io.h"

void ler_pontos(double *pontos){
    int i;

    for(i = 1; i <= 6; i++)
        scanf("%lf", &pontos[i]);
}

void mostrar_pontos(double raio, double *centro){
    printf("Raio: %.3lf\n", raio);
    printf("Centro: (%.3lf, %.3lf)\n", centro[0], centro[1]);
}

void circ_n_viavel(){
    printf("Circulo nao viavel.\n");
}
