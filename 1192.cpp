#include<bits/stdc++.h>

using namespace std;

int main (){
int t, i;
int resultado, n1, n2;
char letra;
	
	scanf("%d", &t);
	for(i=0; i<t; i++){
		cin >> n1 >> letra >> n2;
		if (n1 == n2){
			resultado = n1*n2;
		}else if (letra >=65 && letra <= 90){
			resultado = n2 -n1;
		}else if (letra >= 97 && letra<=122){
			resultado = n1 + n2;
		}
		cout << resultado <<endl;
	}	
	return 0;
}
