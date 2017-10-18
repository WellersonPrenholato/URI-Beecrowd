#include<stdio.h>
#include<math.h>

int main(){
//NOTAS	
int dinheiro1, cem, cinquenta, cinquenta1, vinte, vinte1, dez, dez1, cinco, cinco1, dois, dois1;
//MOEDAS
int moedas, um, um1, cinquentac, vintec, dezc, cincoc, umc;

double dinheiro;

//TRANSFORMAÇAO DE FLOAT PARA INTEIRO
scanf("%lf", &dinheiro);
dinheiro1 = (int)dinheiro;
dinheiro -= dinheiro1;
//printf("Inteiro: %d\n", dinheiro1);
//printf("Moedas: %lf\n", dinheiro);
moedas = (dinheiro *100);
//printf("%d\n", moedas);

cem = dinheiro1/100;
cinquenta = dinheiro1 %100;
cinquenta1 = cinquenta/50;
vinte = cinquenta%50;
vinte1 = vinte/20;
dez = vinte%20;
dez1 = dez/10;
cinco = dez%10;
cinco1 = cinco/5;
dois = cinco%5;
dois1 = dois/2;
// MOEDAS
um = dois%2;
um1 = um/1;

//NOTAS
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",cem);
printf("%d nota(s) de R$ 50.00\n",cinquenta1);
printf("%d nota(s) de R$ 20.00\n",vinte1);
printf("%d nota(s) de R$ 10.00\n",dez1);
printf("%d nota(s) de R$ 5.00\n",cinco1);
printf("%d nota(s) de R$ 2.00\n",dois1);


//MOEDAS
cinquentac = moedas /50;
vintec = (moedas %50)/25;
dezc = (((moedas %50)%25)/10);
cincoc = ((((moedas %50)%25)%10)/5);
umc = ((((moedas %50)%25)%10)%5)/1;

printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", um1);
printf("%d moeda(s) de R$ 0.50\n", cinquentac);
printf("%d moeda(s) de R$ 0.25\n", vintec);
printf("%d moeda(s) de R$ 0.10\n", dezc);
printf("%d moeda(s) de R$ 0.05\n", cincoc);
printf("%d moeda(s) de R$ 0.01\n", umc);

return 0;
}
