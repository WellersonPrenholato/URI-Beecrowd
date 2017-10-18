#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, k, c = 1;
   int i;

   while(cin >> n >> k && n > 0) {
      vector<string> nomes(n);
      map<string, int> ordem;

      for(i = 0; i < n; ++i) {
         cin >> nomes[i];
         ordem[nomes[i]] = i;
      }

      int flag = 0;

      while(!ordem.empty() && k > 0) {//ENQUANTO DIFERENTE DE VAZIO
         for(map<string, int>::iterator it = ordem.begin(); it != ordem.end() && k > 0; ++it){
            if (it->second - flag <= k) {
               k -= (it->second - flag);

               for(i = it->second; i > flag; --i) {
                  nomes[i] = nomes[i - 1];
                  ++ordem[nomes[i - 1]];
               }

               nomes[flag] = it->first;
               ++flag;
               ordem.erase(it->first);
               break;
            }
         }
      }
      
      cout << "Instancia " << c++ << '\n';
      for(i = 0; i < n; ++i)
         cout << nomes[i] << ' ';
      cout << "\n\n";
   }
}
