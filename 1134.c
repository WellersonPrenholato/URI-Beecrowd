#include <stdio.h>

int main (){
	int num, alcool=0, gasolina=0, diesel=0;
		//scanf("%d",& num);
	while (num != 4){
		scanf("%d",& num);
		if (num ==1){
			alcool= alcool +1;
		}else if (num == 2 ){
			gasolina = gasolina +1;
		}else if (num ==3){
			diesel = diesel +1;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	return 0;
}
