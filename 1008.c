#include<stdio.h>

int main(){
	int num;
	float hora, salario, total;
	
	scanf("%d", &num);
	scanf("%f", &hora);
	scanf("%f", &salario);
	
	total = (hora * salario);
	
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n",total);
	
	return 0;
}
