#include <stdio.h>
#include <stdlib.h>

int main () {

    float n1, n2, n3, n4, media, exame, mediaf;

    printf("Nota 1: ");
    scanf("%f",&n1);
    printf("Nota 2: ");
    scanf("%f",&n2);
    printf("Nota 3: ");
    scanf("%f",&n3);
    printf("Nota 4: ");
    scanf("%f",&n4);

    n1 = n1*0.2;
    n2 = n2*0.3;
    n3 = n3*0.4;
    n4 = n4*0.1;

    media = n1+n2+n3+n4;

    if (media>6.9) {
        
        printf("Media: %.1f", media);
        printf("\nAluno aprovado."); }

    if (media<5) {
        
        printf("Media: %.1f", media);
        printf("\nAluno reprovado."); }

    if (media>=5 && media <=6.9) {
        
        printf("Media: %.1f", media);
        printf("\nAluno em exame.\nNota do exame: \n");
        scanf("%f",&exame);

        mediaf = (exame + media)/2;

        if (mediaf>=5) {
            printf("Aluno aprovado."); }

        else {
            printf("Aluno reprovado"); }

        printf("\nMedia final: %.1f", mediaf); }

    return 0;

}

    
        


   


