#include<bits/stdc++.h>

using namespace std;

typedef struct Coordenada{
	int x, y;
	bool visitada;
}Coordenada;

int ganhador;

void procura(vector<vector <int> > mat, vector<vector <Coordenada> > coordenadas, int i, int j){
	if(i >= 0 && i < 5 && j >= 0 && j < 5 && !ganhador){
		coordenadas[i][j].visitada = true;
		if(i == 4 && j == 4)
			ganhador = 1;
		else
		{
			// vai para baixo, cima, esquerda ou direita
			if(i + 1 < 5 && mat[i + 1][j] == 0 && !coordenadas[i + 1][j].visitada)
				procura(mat, coordenadas, i + 1, j); //direita
				
			if(i - 1 >= 0 && mat[i - 1][j] == 0 && !coordenadas[i - 1][j].visitada)
				procura(mat, coordenadas, i - 1, j); //esquerda
				
			if(j + 1 < 5 && mat[i][j + 1] == 0 && !coordenadas[i][j + 1].visitada)
				procura(mat, coordenadas, i, j + 1); //baixo
				
			if(j - 1 >= 0 && mat[i][j - 1] == 0 && !coordenadas[i][j - 1].visitada)
				procura(mat, coordenadas, i, j - 1);//cima
		}
	}
}

int main(){
	int T;
	int i, j, k;
	int e;
	
	cin >> T;
	
	for(i = 0; i < T; i++){
		
		vector<vector <int> > mat(5);
		vector<vector <Coordenada> > coordenadas(5);
		
		for(j = 0; j < 5; j++){
			mat[j].resize(5); //redimensionar
			coordenadas[j].resize(5);//redimensionar
		}

		for(j = 0; j < 5; j++){
			for(k = 0; k < 5; k++){
				cin >> e;
				mat[j][k] = e;

				coordenadas[j][k].x = j;
				coordenadas[j][k].y = k;
				coordenadas[j][k].visitada = false;
			}
		}

		ganhador = 0;
		procura(mat, coordenadas, 0, 0);
		
		if(ganhador)
			cout << "COPS" <<endl;
		else
			cout << "ROBBERS" << endl;
	}

	return 0;
}
