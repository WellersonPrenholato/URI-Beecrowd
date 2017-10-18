#include <stdio.h>
#include<math.h>

int main() {
   int num,i, num2, num3;
   
	scanf("%d", &num);
	
	for (i=1; i<=num; i++){
		num2 = pow (i,2);
		num3 = pow (i,3);
		printf("%d %d %d\n",i, num2, num3);
	}

			             
  return 0;
   }
