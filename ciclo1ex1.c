#include <stdio.h>
#include <stdlib.h>

int main () {

    float f, c;

    printf("Temperatura em ºF: ");
    scanf("%f",&f);

    c = 5*(f-32)/9;

    printf("Temperatura em ºC: %f", c);

    return 0;

}