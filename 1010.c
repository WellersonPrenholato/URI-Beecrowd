#include<stdio.h>

int main(){
	int cod1, quant1, cod2, quant2;
	float valor1, valor2, total;
	
	scanf("%d %d %f", &cod1, &quant1, &valor1);
	scanf("%d %d %f", &cod2, &quant2, &valor2);
	
	total = ((quant1 * valor1)+(quant2 * valor2));
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
	return 0;
}
