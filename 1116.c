#include <stdio.h>

int main(){
	int num,i; 
	float num1, num2;
	
	scanf("%d", &num);
	
	for (i=0; i<num; i++){
		scanf("%f %f", &num1, &num2);
		if (num2 == 0){
			printf("divisao impossivel\n");
		}else{
			printf("%.1f\n", num1/num2);
		}
	}
    
return 0;
}
