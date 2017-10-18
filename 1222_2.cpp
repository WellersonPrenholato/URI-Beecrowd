#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, L, C;

    while (cin >> N >> L >> C) {
        string linha, word;

        cin.ignore(1);

        getline(cin, linha);

        stringstream ss(linha);

        int colunas = 0,
            linhas = 0,
            paginas = 0;

        while (ss >> word) {
            if (colunas + word.length() == C) {
                colunas = 0;
                linhas++;
            }
            else if (colunas + word.length() > C) {
                colunas = word.length() + 1;
                linhas++;
            }
            else {
                colunas += word.length() + 1;
            }

            if (linhas == L) {
                paginas++;
                linhas = 0;
            }
        }

        if (linhas > 0 || colunas > 0) paginas++;

        cout << paginas << '\n';
    }

    return 0;
}
