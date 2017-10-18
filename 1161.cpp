#include<bits/stdc++.h>

using namespace std;

long long int fat (int x){
	if (x == 0){
		return 1;
	}else {
		return x*fat(x-1);
	}
}

int main (){
	int n, m;
	long long int soma;
	
	while (scanf("%d %d", &n, &m)!=EOF){
	soma = fat(n) + fat(m);
	cout <<soma <<endl;
}
	return 0;
}
