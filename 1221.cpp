#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, cont;
    long long p;
    
    cin >> n;
    
    for(int i = 0; i <n; i++){
            cont = 0;
            cin >> p;
            
            if(p == 0 || p ==1){
                 printf("Not Prime\n");
                 continue;
            }
            
            if(p == 2){
                 printf("Prime\n");
                 continue;
            }
            
            for(int i = 2; i < sqrt(p)+1; i++){
                    if(p % i == 0) cont++;
                    if(cont == 2) break;
            }
            
            if(cont >= 1) printf("Not Prime\n");
            else printf("Prime\n");
    }
    return 0;
}