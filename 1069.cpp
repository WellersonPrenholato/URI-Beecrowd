#include <bits/stdc++.h>

using namespace std;

int main(){
    char linha[1001];
    int i,esq, dir, diamantes=0, cases;
    scanf("%d", &cases);
    while(cases--){
    	diamantes =0;
    	scanf("%s",linha);
       esq = 0;
       dir = 0;
       
       for(i = 0; linha[i] != '\0'; i++){
             if(linha[i] == '<') esq++;
             else if (linha[i] == '>'){
                  dir++;
                  if(esq > 0){
                         esq--;
                         dir--;
                         diamantes++;
                  }
             }
       }
       printf("%d\n", diamantes);
    }	
    return 0;
}
