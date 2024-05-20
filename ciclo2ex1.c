#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contador(int a, int n[], int i) {

    a += n[i];

    return a; }

int main () {

    int embarque[5];
    int desembarque[5];
    int circ[5];
    int transp[5];
    char nome[5][50];
    int i, et=0, dt=0, df=0;

    strcpy(nome[0], "Campinas");
    strcpy(nome[1], "Sao Paulo");
    strcpy(nome[2], "Sao Jose dos Campos");
    strcpy(nome[3], "Resende");
    strcpy(nome[4], "Rio de Janeiro");

    for (i=0; i<5; i++) {
            printf("Estacao %d: %s\n", i, nome[i]);
            printf("Quantos passageiros embarcaram: ");
            scanf("%d",&embarque[i]);
            et = contador(et,embarque,i);
            printf("Quantos passageiros desembarcaram: ");
            scanf("%d",&desembarque[i]);
            dt = contador(dt,desembarque,i);
            circ[i] = 0; transp[i] = 0;
            circ[i] = circ[i] + embarque[i] + desembarque[i];
            transp[i] = transp[i] + et - dt; }

    printf("\n\nTotal de passageiros transportados: %d\n\n", et);

    printf("Circulacao de passageiros por estacao(entra+sai): \n");

    for (i=0; i<5; i++) {
            printf("Estacao %d: %d\n", i, circ[i]); }

    printf("\nPassageiros transportados por estacao(dentro do trem ao sair da estacao): \n");

    for (i=0; i<5; i++) {
            printf("Estacao %d: %d\n", i, transp[i]); }

    df=et-dt;

    printf("\nDiferenca entre embarque-desembarque (controle de passageiros): %d\n",df);

    return 0;

}

