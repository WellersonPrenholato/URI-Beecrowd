#include<stdio.h>
#include <math.h>

int main(){
      int i,j,x;
      
      scanf("%d%d",&i,&j);
      x = 24-i+j;
      if(x > 24)	
	      x = abs(24 - (24-i+j));
	      printf("O JOGO DUROU %d HORA(S)\n",x);
	return 0;
}
