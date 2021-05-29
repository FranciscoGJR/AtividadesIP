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

void main(){



    for(c = 1; c <= 5; c++){
        printf("%d", c);
    }

}
