#include <stdio.h>

int main() {
   int n, i,numero=1;
   
	scanf("%d", &n);

	for(i = 1; i <= n; i++)	{
		for( ;numero <=4*n; numero++){
		
			if((numero % 4) == 0){
				printf("PUM\n");
			}else{
				printf("%d ", numero);
			}
		}
	}
			             
  return 0;
   }
