double* somaPolinomios(double* p, double* q, int n) {
    int i;
    double* soma = (double*) malloc(sizeof(double)*n);

    for(i = 0; i < n; i++)
        soma[i] = p[i] + q[i];

    return soma;
}