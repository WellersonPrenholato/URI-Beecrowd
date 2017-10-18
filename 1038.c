#include <stdio.h>

int main(){	
	int cod, quant;
	double total;
	
	scanf("%d %d", &cod, &quant);
	
	if (cod == 1){
		total = quant * 4;
		printf("Total: R$ %.2lf\n", total);
	}
	if (cod == 2){
		total = quant * 4.5;
		printf("Total: R$ %.2lf\n", total);
	}
	if (cod == 3){
		total = quant * 5;
		printf("Total: R$ %.2lf\n", total);
	}
	if (cod == 4){
		total = quant * 2;
		printf("Total: R$ %.2lf\n", total);
	}
	if (cod == 5){
		total = quant * 1.5;
		printf("Total: R$ %.2lf\n", total);
	}
					
    return 0;
}
