#include <stdio.h>
#include <stdlib.h>

void imprime(int m[][50], int n) {

    int i, j;

    for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                    if (m[i][j]==0) {
                            break; }
                    printf("%d ", m[i][j]); }
            printf("\n"); }

}

int main () {

     int m[50][50];
     int n, i, j;

     printf("Numero de linhas: ");
     scanf("%d",&n);

     for (i=0; i<n; i++) {
            m[i][0]=1;
            for (j=1; j<n; j++) {
                m[i][j]=0; } }

    for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                m[i+1][j+1] = m[i][j] + m[i][j+1]; } }

    imprime(m,n);

    return 0;
}



