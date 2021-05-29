#include <stdio.h>

void cor(int identificador){

    switch (identificador){
        case 1:
            printf("Verde.\n");
            break;
        case 2:
            printf("Amarelo.\n");
            break;
        case 3:
            printf("Azul.\n");
            break;
        case 4:
            printf("Branco.\n");
            break;
        default:
            printf("Identificador invalido.\n");
    }
}


void conjecturaDeCollatz(int n){
    int contador;

    printf("Imprimindo sequencia iniciando em %i\n", n);

    while (n>1){
        if (n % 2 == 0) n = n/2;
        else n = 3*n + 1;

        //CONSTRUCAO DAS COLUNAS
        contador += 1;
        if (contador % 7 == 0) printf("\n");

        printf("%5i ",n);
   }
    printf("\nForam realizadas um total de %d interacoes.", contador);
}

void main(){

    // CHAMAR FUNCAO COR COM LOOP
    int c;
    for(c = 1; c < 6; c++) cor(c);

    conjecturaDeCollatz(91);
}
