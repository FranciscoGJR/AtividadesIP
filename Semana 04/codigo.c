#include <stdio.h>

double areaTrapezio(double baseMaior, double baseMenor, double altura){
    return ((baseMaior + baseMenor) * altura)/2;
}

double areaRetangulo(double base, double altura){
    return areaTrapezio(base, base, altura);
}

double areaQuadrado(double lado){
    return areaRetangulo(lado, lado);
}

void main(){
    printf("AREA DO TRAPEZIO: %.2f\n", areaTrapezio(3,2,1));
    printf("AREA DO RETANGULO: %.2f\n", areaRetangulo(11,27));  /* RESPOSTA DO EXERCÍCIO 2 = 297 */
    printf("AREA DO QUADRADO: %.2f\n", areaQuadrado(5));
}
