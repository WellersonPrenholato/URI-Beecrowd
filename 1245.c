#include <stdio.h>

typedef struct tipoCalcados {
    int direito, esquerdo;
} tipoCalcados;
 
int main ( ) {
    tipoCalcados calcados[111];
    int N, i, j, total, numero, maior, menor;
    char tam;
    while ( scanf ( "%d", &N ) != EOF ) {
        total = maior = 0, menor = 1111;
        for ( i=29; i<62; i++ ) calcados[i].esquerdo = calcados[i].direito = 0;
        for ( i=0; i<N; i++ ) {
            scanf ( "%d %c", &numero, &tam );
            if ( numero > maior ) maior=numero;
            if ( numero < menor ) menor=numero;
            if ( tam == 'E' ) calcados[numero].esquerdo++;
            else calcados[numero].direito++;
        }
        for ( i=menor; i<=maior; i++ ) {
            if ( calcados[i].esquerdo > 0 && calcados[i].direito > 0) {
                if ( calcados[i].esquerdo >= calcados[i].direito ) total = total+calcados[i].direito;
                else total = total+calcados[i].esquerdo;
            }
        }
        printf ( "%d\n", total );
    }
}
