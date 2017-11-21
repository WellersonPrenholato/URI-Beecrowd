#include <stdio.h>

int main (){
	int n, i, a[1001];
	int dois=0, tres=0, quatro = 0, cinco =0;
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
		if (a[i]%2 ==0 ){
			dois++;
			}if (a[i]% 3 == 0){
				tres++;
				}if (a[i]%4==0){
					quatro++;
					}if (a[i]%5==0){
						cinco++;
					}
	}
	
	printf("%d Multiplos(s) de 2\n", dois);
	printf("%d Multiplos(s) de 3\n", tres);
	printf("%d Multiplos(s) de 4\n", quatro);
	printf("%d Multiplos(s) de 5\n", cinco);
	
	return 0;
}
