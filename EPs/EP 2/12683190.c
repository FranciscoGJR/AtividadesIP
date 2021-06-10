/*********************************************************************/
/**   ACH2001 - Introducao a Programacao                            **/
/**   EACH-USP - Primeiro Semestre de 2021                          **/
/**   94       - Luciano Digiampietri                               **/
/**                                                                 **/
/**   Segundo Exercicio-Programa                                    **/
/**                                                                 **/
/**   Francisco Oliveira Gomes Junior           12683190            **/
/**                                                                 **/
/*********************************************************************/

/*  Calculo para raiz quadrada  */

#include <stdio.h>

double modulo(double number){
    if (number < 0) return number * -1;
    return number;
}

    //RAIZ QUADRADA COM METODO DE NEWTON
double raizQuadrada(double a, double epsilon) {
        // RETORNAR ERRO
    if(a < 0 || epsilon <= 0 || epsilon >= 1) return -1;
    if(a == 0) return 0;

    double xo, xi;

        //PRIMEIRA INTERACAO
    xo = a/2;

        //REPETITIVAS INTERACOES
    while(1){
        xi = (a/xo + xo)/2;

            //CONDICAO DE PARADA
        if (modulo(xi - xo) <= epsilon) return xi;

        xo = xi;
    }
}


int main() {
        //TESTES
	printf("(35) (0.00342) = %f\n", raizQuadrada(35, 0.00342));

	printf("(45674) (0.042) = %f\n", raizQuadrada(45674, 0.042));

	printf("(0) (0.042) = %f\n", raizQuadrada(0, 0.042));

	printf("(-4) (0.042) = %f\n", raizQuadrada(-4, 0.042));

	printf("(91) (0) = %f\n", raizQuadrada(91, 0));

	printf("(91) (1) = %f\n", raizQuadrada(92, 1));

	printf("(42) (6) = %f\n", raizQuadrada(42, 6));

	printf("(42) (-87) = %f\n", raizQuadrada(42, -87));
	return 0;
}
