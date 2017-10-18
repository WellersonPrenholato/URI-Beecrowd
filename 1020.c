#include<stdio.h>
#include<math.h>

int main (){
	int num, ano, mes, dia;
	
	scanf("%d",&num);
	
	ano = floor(num / 365);
	mes = floor((num % 365)/30);
	dia = (num % 365) % 30;
	
	if (mes >=12){
		ano = ano + floor(mes/12);
		mes %= 12;
	}
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	return 0;
}
