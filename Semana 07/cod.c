#include <stdio.h>

void retangulo(int largura, int altura){
    int c, i;

    for(i = 0; i < altura; i++){
        for(c = 0; c < largura; c++)
            printf("#");
        printf("\n");
    }
}

void main(){
    printf("LARGURA = 4\nALTURA = 3: \n");
    retangulo(4, 3);
}
