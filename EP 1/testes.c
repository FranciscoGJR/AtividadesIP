#include <stdio.h>
int n50, n20, n5, n1;

//int definirQuantidade(int nota){
    //50
    //int saida;

    //saida = valor / nota;
    //valor %= nota;
    //return saida;

//}


void main(){
    //valor = 150;

    //n50 = definirQuantidade(50);
    //n20 = definirQuantidade(20);


    int valor = 2344;
    printf("VALOR = %d\n", valor);

    // RETIRAR NOTAS DE R$50,00
    n50 = valor / 50;
    valor %= 50;

    //RETIRAR NOTAS DE R$20,00
    n20 = valor / 20;
    valor %= 20;

    //RETIRAR NOTAS DE R$5,00
    n5 = valor / 5;
    valor %= 5;

    //DEFINIR NOTAS DE R$1,00
    n1 = valor;

    printf("R$ 50,00 = %d\n", n50);
    printf("R$ 20,00 = %d\n", n20);
    printf("R$ 5,00 = %d\n", n5);
    printf("R$ 1,00 = %d\n", n1);
    printf("RESTO = %d\n", n50*50 + n20*20 + n5*5 + n1);

}
