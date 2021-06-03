double modulo(double number){
    if (number < 0) return number * -1;
    return number;
}

double raizQuadrada(double a, double epsilon) {
	double resposta = 0.42;
    double xo, xi;

    xo = a/2;

    while(1){
	xi = (a/xo + xo)/2;


    printf("x0 = %f, x1 = %f\n", xo, xi);

	if (modulo(xi - xo) <= epsilon) return resposta;

	xo = xi;
    }
}


int main() {


	double valor = 63;
	double precisao = 0.001;
	raizQuadrada(valor, precisao);

	return 0;
}
