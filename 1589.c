#include<stdio.h>

int main (){
	int i, t, resultado;
	int num1, num2;
	
	scanf("%d", &t);
	
	for (i=0; i<t; i++){
		scanf("%d", &num1);
		scanf("%d", &num2);
		
		resultado = num1 + num2;
		
		printf("%d\n", resultado);
	}
	return 0;
}
