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

	double k1, k2, cx, cy;
	double a = 2*(pontos[2] - pontos[0]);
	double b = 2*(pontos[3] - pontos[1]);
	double c = 2*(pontos[4] - pontos[0]);
	double d = 2*(pontos[5] - pontos[1]);

	double det = (a*d) - (b*c);

	if (det == 0)
		calc_centro();

	k1 = ((pontos[2] * pontos[2]) + (pontos[3] * pontos[3]) - (pontos[0] * pontos[0]) + (pontos[1] * pontos[1])); 
	k2 = ((pontos[4] * pontos[4]) + (pontos[5] * pontos[5]) - (pontos[0] * pontos[0]) + (pontos[1] * pontos[1]));

	cx = ((k1 * d) - (k2*b)) / det;
	cy = ((a * k2) - (c*k1)) / det;

	centro[0] = cx;
	centro[1] = cy;

}

int verificar_poli(){
    return 1;
}
