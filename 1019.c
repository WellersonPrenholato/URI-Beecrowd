#include<stdio.h>

int main (){

int N, hora, min, seg;

scanf("%d", &N);

hora = N/3600;
min = (N-(hora*3600))/60;
seg = N-((hora*3600)+(min*60));

printf("%d:%d:%d\n", hora, min, seg);

return 0;

}
