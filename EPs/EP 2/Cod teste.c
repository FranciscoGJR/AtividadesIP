double modulo(double number){
    if (number < 0) return number * -1;
    return number;
}

double raizQuadrada(double a, double epsilon) {
    if(a < 0 || epsilon <= 0 || epsilon >= 1) return -1;
    if(a == 0) return 0;

    double xo, xi;

    xo = a/2;

    while(1){
	xi = (a/xo + xo)/2;


//    printf("x0 = %f, x1 = %f\n", xo, xi);


	if (modulo(xi - xo) <= epsilon) {
        return xi;}

	xo = xi;
    }
}


int main() {


	double valor = 16;
	double precisao = 0.001;

	printf("(35) (0.00342) = %f\n", raizQuadrada(35, 0.00342));

	printf("(45674) (0.042) = %f\n", raizQuadrada(45674, 0.042));

	printf("(-4) (0.042) = %f\n", raizQuadrada(-4, 0.042));

	printf("(0) (0.042) = %f\n", raizQuadrada(0, 0.042));

	printf("(42) (6) = %f\n", raizQuadrada(42, 6));

	printf("(42) (-87) = %f\n", raizQuadrada(42, -87));

	printf("(167) (0.593) = %f\n", raizQuadrada(167, 0.593));

	printf("(6241) (0.00352) = %f\n", raizQuadrada(6241, 0.00352));

	printf("(9846) (0.245) = %f\n", raizQuadrada(9846, 0.245));

	printf("(91) (0.04) = %f\n", raizQuadrada(91, 0.04));
	return 0;
}
