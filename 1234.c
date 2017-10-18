#include<stdio.h>
#include<string.h>

int main (){
    char vet[1000];
    int i, a=0;
    
    while(gets(vet) != NULL){
        a=0;
        for(i=0; vet[i] != '\0'; i++){
            if(vet[i] >= 'A' && vet[i] <= 'Z'){	
                a++;
                if(a%2==0) 
					vet[i]+=32;
            }
            if(vet[i] >= 'a' && vet[i] <= 'z'){
                a++;
                if(a%2!=0) 
					vet[i]-=32;
            }
        }
        printf("%s\n", vet);
    }
}
