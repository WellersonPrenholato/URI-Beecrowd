#include<stdio.h>

int main (){
	double salario, reajuste, salariototal;
	
	scanf("%lf", &salario);
	
	if (salario > 0 && salario <= 400){
		reajuste = salario * 0.15;
		salariototal = salario + reajuste;
		printf("Novo salario: %.2lf\n", salariototal);
		printf("Reajuste ganho: %.2lf\n", reajuste);
		printf("Em percentual: 15 %%\n");
	}else if (salario >=400.01 && salario <=800){
		reajuste = salario * 0.12;
		salariototal = salario + reajuste;
		printf("Novo salario: %.2lf\n", salariototal);
		printf("Reajuste ganho: %.2lf\n", reajuste);
		printf("Em percentual: 12 %%\n");
	}else if (salario >= 800.01 && salario <= 1200){
		reajuste = salario * 0.10;
		salariototal = salario + reajuste;
		printf("Novo salario: %.2lf\n", salariototal);
		printf("Reajuste ganho: %.2lf\n", reajuste);
		printf("Em percentual: 10 %%\n");
	}else if (salario >= 1200.01 && salario <= 2000){
		reajuste = salario * 0.07;
		salariototal = salario + reajuste;
		printf("Novo salario: %.2lf\n", salariototal);
		printf("Reajuste ganho: %.2lf\n", reajuste);
		printf("Em percentual: 7 %%\n");
	}else if (salario > 2000){
		reajuste = salario * 0.04;
		salariototal = salario + reajuste;
		printf("Novo salario: %.2lf\n", salariototal);
		printf("Reajuste ganho: %.2lf\n", reajuste);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}
