#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, i=2;

    printf("Digite o numero: ");
    scanf("%d",&a);

    if (a==1) {
            printf("Nao primo"); }
        
    if (a==2) {
            printf("Primo"); }

    else {
    
        for (i=2;i<a;i++) {
        
            if (a%i==0) {
            printf("Nao primo"); break; }

            if (i==a/2+1) {
            printf("Primo"); break; }
            
        }   }

    return 0;

}
        