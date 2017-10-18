#include<stdio.h>
#include<math.h>

int main(){
	
int N, cem, cinquenta, cinquenta1, vinte, vinte1, dez, dez1, cinco, cinco1, dois, dois1, um, um1;

scanf("%d", &N);
printf("%d\n", N);
cem = N/100;
cinquenta = N%100;
cinquenta1 = cinquenta/50;
vinte = cinquenta%50;
vinte1 = vinte/20;
dez = vinte%20;
dez1 = dez/10;
cinco = dez%10;
cinco1 = cinco/5;
dois = cinco%5;
dois1 = dois/2;
um = dois%2;
um1 = um/1;

printf("%d nota(s) de R$ 100,00\n",cem);
printf("%d nota(s) de R$ 50,00\n",cinquenta1);
printf("%d nota(s) de R$ 20,00\n",vinte1);
printf("%d nota(s) de R$ 10,00\n",dez1);
printf("%d nota(s) de R$ 5,00\n",cinco1);
printf("%d nota(s) de R$ 2,00\n",dois1);
printf("%d nota(s) de R$ 1,00\n",um1);

return 0;
}
