#include<stdio.h>
#include<math.h>
int main (){
	int px1,py1,px2,py2;
	int resultado =2;
	int x,y;
	
	while((scanf("%d %d %d %d", &px1, &py1, &px2, &py2))&&(px1 != 0 || py1 !=0 || px2 != 0 || py2 != 0)){
		x = fabs(px1 - px2);
		y = fabs (py1 - py2);
		
		if (px1 == px2 && py1 == py2){//Mesmo ponto igual a zero
			resultado = 0;
			printf("%d\n", resultado);
		}else if (px1 == px2 && py1 != py2){//Vertical se o px1 e px2 forem iguais e o py1 e py2 diferentes
			resultado = 1;
			printf("%d\n", resultado);
		}else if (px1 != px2 && py1 == py2){//Na Horizontal se o px1 for diferente que px2 e o py1 e py2 iguais 
			resultado = 1;
			printf("%d\n", resultado);
			
			// Algo errado aqui
		}else if (x == y){//Na diagonal se o modulo de px1 - px2 for igual ao modulo de py1 - py2
			resultado = 1;
			printf("%d\n", resultado);	
		}else {
			resultado = 2;
			printf("%d\n", resultado);//Caso nao atenda nenhuma condiçao acima
		}
	}
	return 0;
}

