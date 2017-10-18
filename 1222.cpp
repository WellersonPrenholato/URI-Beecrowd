#include<bits/stdc++.h>

using namespace std;
int main(){
     int numPalavras, linhas, paginas, caracs, i;
     short maxLinhas, maxCarac;
     char palavra[71];

     while(scanf("%d %hd %d", &numPalavras, &maxLinhas, &maxCarac) != EOF){
     	for(i = 1, linhas = paginas = caracs = 0; i <= numPalavras; i++){
     		scanf("%s", &palavra);
     		
     		caracs += strlen(palavra);
     
            if(caracs == maxCarac){
            	caracs = 0;
            	linhas++;
            }
     		else if(caracs > maxCarac){
                caracs = strlen(palavra) + 1;
                linhas++;
     		}
     		 		 
     		else if(i < numPalavras){
     		     caracs++;

	     		 if(caracs == maxCarac){
	            	caracs = 0;
	            	linhas++;
	            }
	        }

     		if(linhas == maxLinhas){
     			linhas = 0;
     			paginas++;
     		}
     	}

     	if(linhas > 0 || caracs > 0) paginas++;
     	printf("%d\n", paginas);
     }

	 return 0;
}
