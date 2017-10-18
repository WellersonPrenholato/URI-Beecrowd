#include <stdio.h>

int main(){
	int num,i; 
	double num1, num2, num3, ponderada;
	
	scanf("%d", &num);
	
	for (i=0; i<num; i++){
		scanf("%lf %lf %lf", &num1, &num2, &num3);
		ponderada = (num1*2 + num2*3 + num3*5)/10;
		printf("%.1lf\n", ponderada);
	}
    
return 0;
}
