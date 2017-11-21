#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;

    cin >> N;

    while (N--) {
        int K;
        string idioma_final;

        cin >> K;
        cin.ignore(1);//LImpeza de buffer 

        getline(cin, idioma_final);

        for (int i = 1; i < K; i++) {
            string idioma;

            getline(cin, idioma);

            if (idioma != idioma_final) idioma_final = "ingles";
        }

        cout << idioma_final << endl;
    }

    return 0;
}
