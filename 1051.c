#include <stdio.h>
#include <stdlib.h>

int main (){
	double salario, salarioconta, salariototal, salariototal1, salariototal2, salariototal3;
	
	scanf("%lf", &salario);
	
	if ( salario <= 2000){
		printf("Isento\n");
		
	}else if (salario > 2000 && salario <= 3000){				
		salarioconta = (salario - 2000);				
		salariototal = (salarioconta*0.08);
		printf("R$ %.2lf\n", salariototal);
		
	}else if ( salario > 3000 && salario <= 4500){             
		salariototal2 = (((salario-3000)*0.18)+ 80);
		printf("R$ %.2lf\n", salariototal2);
		
	}else if (salario > 4500){
		salariototal3 = (((salario-4500)*0.28)+ 350);
		printf("R$ %.2lf\n", salariototal3);
	}
	return 0;
}
