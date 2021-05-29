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
            printf("Identificador invalido.");
    }
}


void conjecturaDeCollatz(int n){
   printf("Imprimindo sequencia iniciando em %i\n", n);
   while (n>1){
      if (n % 2 == 0) n = n/2;
      else n = 3*n + 1;
      printf("%i\n",n);
   }
}

void main(){

    // CHAMAR FUNÇÃO COR
    int c;
    for(c = 1; c < 6; c++) cor(c);


    conjecturaDeCollatz(91);

}
