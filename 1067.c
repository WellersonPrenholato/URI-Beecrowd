#include<stdio.h>
/*
int main(){
	int num, i;        
	
	scanf("%d", &num);	
	
		for (i = num; i>=1; i--){
			if (i % 2== 1){
				printf("%d\n", i);
			}
		}
*/		
		
int main () {
     
    int x, i;
    i = 0;
    scanf("%d", &x);
     
    while ( i< x) {
    	i++;
        if (i%2 == 1) {
            printf("%d\n", i);
            
        }
    }

return 0;
}
