int contagem1(int* valores, int n, int x){
    int c, contador;

    for(c = 0; c < n; c++)
        if(valores[c] == x) contador++;

    return contador;
}