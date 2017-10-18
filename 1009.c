#include<stdio.h>

int main(){
	char nome[10];
	double TOTAL, vendas, salario, comissao;
	
	scanf("%s", nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	
	comissao = vendas*0.15;
	TOTAL  = (salario + comissao);
	
	printf("TOTAL = R$ %.2lf\n", TOTAL);
	
	return 0;
}
