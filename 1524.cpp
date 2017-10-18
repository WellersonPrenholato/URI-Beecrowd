#include<stdio.h>
#include<stdlib.h>

//Função chamada pelo qsort, ordena em ordem decrescente
int compare ( const void * a, const void * b ) {
  return ( * ( int* ) b - * ( int* ) a );
}

int main ( ) {
    int arr[99999], aux[99999];
    int n, k, a, i, sum;
 
    while (scanf( "%d %d", &n, &k) != EOF) {
        aux[0] = 0; //A primeira posição da fila é sempre zero.
        arr[0]= 0;
        for ( i=1;i<n;i++) {
            scanf ( "%d", &aux[i] );
			// Guarda no vetor arr a distância entre i e i-1 na fila.
            arr[i] = aux[i] - aux[i - 1];
        }
		// Ordena o vetor de distâncias em ordem decrescente.
        qsort (arr, n, sizeof(int), compare);
 
		// Soma as distâncias pedidas que estarão entre K e N.
        sum = 0;
        for (i=k - 1;i<n;i++)
            sum += arr[i];
        printf ("%d\n", sum );
    }
    return 0;
}
