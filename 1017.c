#include <stdio.h>

int main (){
	double tempo, velocidade, distancia, litros;
	
	scanf("%lf", &tempo);
	scanf("%lf", &velocidade);
	
	distancia = tempo * velocidade;
	litros = distancia / 12;
	
	printf("%.3lf\n", litros);
	
	return 0;
}
