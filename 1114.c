#include <stdio.h>

int main(){
	int num, senha= 2002;
	
	while(num != senha){
		scanf("%d", &num);
		if (num == 2002){
			printf("Acesso Permitido\n");
		}else{
			printf("Senha Invalida\n");
		}
	}
return 0;
}
