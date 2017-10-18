#include<bits/stdc++.h>
using namespace std;

int main() {
	map <string, double> avres;
	map <string, double>::iterator it;
	
	string avre; 
	int cases, i, total = 0;
	
	cout << fixed << setprecision(4);
	
	cin >> cases;
	cin.get();
	getline(cin, avre);
	
	for (i = 1; i <= cases; i++) {
		while (getline(cin, avre) and avre[0] != '\0') {
			/*
				o caractere '\0' representa o fim de caractere,
				é sempre o ultimo em qualquer string/char
				
				str = "exemplo";
				str[1] == '\0'; -> false
				str[7] == '\0'; -> true
				
				no problema, caso a var 'avre[0]' seja fim de char então
				foi lida uma linha em branco ou chegamos no fim da entrada
			*/
			/*
				lê a quantidade de arvore com o nome 'avre' e coloca no mapa
				o total tambem é aumentado com cada arvore lida independente do seu nome
			*/
			avres[avre]++;
			total++;
		}
		
		if (i > 1) {
			/* linha em branco entre os casos de teste */
			cout << "\n";
		}
		
		for (it = avres.begin(); it != avres.end(); it++) {
			/*
				mostra o nome da arvore e a sua porcentagem
				comparada ao total de arvores usando regra
				de tres
			*/
			cout << it -> first << " " << 100.0 * it -> second / total << endl;
		}
		
		/* resetamos o mapa e o total */
		total = 0;
		avres.clear();
	}
	
	return 0;
}
