#include<bits/stdc++.h>

#define INF INT_MAX

using namespace std;

int n, m, c, k;
int grafo[1010][1010];
int custo[1010];

queue<int> fila;

// função de infinitar o grafo e o vetor custo
void infinito(){
	for(int i=0; i<=n; i++){
		custo[i]= INF;
		for(int j=0; j<=n; j++) grafo[i][j]=INF;
	}
}

// algoritmo de Dijkstra
int dijkstra(int ori, int dest){
	custo[ori] = 0;
	fila.push(ori);
	while(!fila.empty()){
		int i = fila.front();
		fila.pop();
		for(int j=0; j<n; j++){
			if(grafo[i][j] != INF && custo[j] > custo[i] + grafo[i][j]){
				custo[j] = custo[i] + grafo[i][j];
				fila.push(j);
			}
		}
	}
	return custo[dest];
}

int main (){
	
	while (scanf("%d %d %d %d", &n, &m, &c, &k), (n||m||c||k)){
	
		infinito(); // infinite o grafo e o vetor custo
		
		for(int i=1; i<=m; i++){ // para cada estrada
			
			// declare e leia os valores de u, v e p
			int u, v, p;
			scanf("%d %d %d", &u, &v, &p);
		
			if(u>=c && v>=c){ // se as duas cidades estiverem fora da rota
				
				// adicione a estrada normalmente
				grafo[u][v]=p;
				grafo[v][u]=p;
			}
			// se v pertencer à rota
			if(u>=c && v<c) grafo[u][v]=p; // adicione apenas a estrada que chega em v
			
			// se u pertencer à rota
			if(u<c && v>=c) grafo[v][u]=p; // adicione apenas a estrada que chega em u
			
			// se as duas cidades forem cidades consecutivas da rota
			if(u<c && v<c && abs(u-v)==1){
				//adiciono a estrada normalmente
				grafo[u][v]=p;
				grafo[v][u]=p;
			}
		}
	
		printf("%d\n", dijkstra(k, c-1)); // imprimo o valor do menor caminho, usando o algoritmo de Dijkstra
	}
	return 0;
}
