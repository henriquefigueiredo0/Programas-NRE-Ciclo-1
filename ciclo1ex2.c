#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float v1, v2, r;
    int i;

    printf("########## CALCULADORA BINARIA ##########\n1.V1 + V2\n2.V1 - V2\n3.V1*V2\n4.V1/V2\n");

    printf("Valor 1: ");
    scanf("%f",&v1);
    printf("Valor 2: ");
    scanf("%f",&v2);
    printf("Indice: ");
    scanf("%d",&i);

    switch (i) {

        case (1): r = v1 + v2; break;
        case (2): r = v1 - v2; break;
        case (3): r = v1*v2; break;
        case (4): r = v1/v2; break;
    }

    printf("Resultado: %.2f", r);

    return 0;

}

    