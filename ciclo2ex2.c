#include <stdio.h>
#include <stdlib.h>

void adicao (float a[50][50], float b[50][50], float res[50][50], int n) {

    int i, j;
    for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                res[i][j]=0;
                res[i][j] = a[i][j] + b[i][j]; }
    }
}

void subtracao (float a[50][50], float b[50][50], float res[50][50], int n) {

    int i, j;
    for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                res[i][j]=0;
                res[i][j] = a[i][j] - b[i][j]; }
    }
}

void multiplicacao(float a[50][50], float b[50][50], float res[50][50], int n){

    int i, j, i2, j2;
    for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                j2=0;
                    for (i2=0; i2<n; i2++) {
                        res[i][j] += a[i][j2]*b[i2][j];
                        j2++; } }
    }
}

void printar_matriz(float a[50][50], int n){

    int i, j;
    for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                    printf("%.2f ", a[i][j]); }
            printf("\n"); } }

void main () {

    float a[50][50];
    float b[50][50];
    float res[50][50];
    int n, i, j, i2, j2, ind;

    printf("Operacao de matrizes\n\nNumero de linhas e colunas de cada matriz: ");
    scanf("%d",&n);

    printf("Valores da matriz A:\n");
    for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                    scanf("%f",&a[i][j]); } }

    printf("\nValores da matriz B:\n");
    for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                    scanf("%f",&b[i][j]); } }

    printf("\nOperacoes:\n\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n\nNumero da operacao desejada: ");
    scanf("%d",&ind);

    if (ind==1) {

       adicao(a, b, res, n); }

    if (ind==2) {

        subtracao(a, b, res, n); }

    if (ind==3) {

        multiplicacao(a, b, res, n); }

    printar_matriz(res, n);

}









