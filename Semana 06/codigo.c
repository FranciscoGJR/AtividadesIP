#include <stdio.h>

void cor(int identificador){

    if (identificador == 1) printf("Verde\n");
    else if(identificador == 2) printf("Amarelo\n");
    else if(identificador == 3) printf("Azul\n");
    else if(identificador == 4) printf("Branco\n");
    else printf("Identificador invalido\n");



}

void main(){

    cor(1);
    cor(2);
    cor(3);
    cor(4);
    cor(6);
}
