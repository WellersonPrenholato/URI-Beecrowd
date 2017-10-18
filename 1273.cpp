#include<bits/stdc++.h>
using namespace std;

int main() {
    bool pulalinha = false;
    int n;
    int i, g;
    string s;
    vector<string> ss;

    while (cin >> n && n != 0) {
        if (pulalinha){
            cout << endl;
        } else {
            pulalinha = !pulalinha;
        }
        g = 0;

        while (n--) {
            cin >> s;
            if (s.length() > g) g = s.length();
            ss.push_back(s);
        }

        for (i = 0; i < ss.size(); i++) {
            cout << setw(g); //Espaços antes da palavra
            cout << ss[i] << endl;
        }
        ss.clear();
    }

    return 0;
}
