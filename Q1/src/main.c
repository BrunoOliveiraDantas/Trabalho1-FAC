#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include "operations.h"
#include "plan_cart.h"

int main(){

    ler_pontos(pontos);

    if(verificar_poli(pontos) == 1)
        mostrar_pontos(raio, centro);
    else
        circ_n_viavel();

    return 0;
}
