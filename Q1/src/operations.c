/*Utilize um arquivo .c/.h para realizar as operações geométricas/algébricas
necessárias para o cálculo do raio e do centro do círculo.*/

#include <stdio.h>
#include "operations.h"
#include "plan_cart.h"

int calc_det(){
    double n1, n2, n3, n4, n5, n6;

    n1 = pontos[0]*pontos[3];
    n2 = pontos[1]*pontos[4];
    n3 = pontos[2]*pontos[5];
    n4 = pontos[3]*pontos[4];
    n5 = pontos[0]*pontos[5];
    n6 = pontos[1]*pontos[2];

    return (n1 + n2 + n3 - n4 - n5 - n6);
}

void calc_raio(){
}

void calc_centro(){
}

int verificar_poli(){
    return 1;
}
