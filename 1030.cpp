#include <bits/stdc++.h>

using namespace std;

int josephus(int n, int k) {
    int x = 0, i;
    for (i = 2; i <= n; ++i) {
        x = (x + k) % i;
    }
    return x;
}

int main() {
  int t, i; 
  int n, k; // n pessoas     k pulos
  
  cin >> t;
  
  for (i = 0; i < t; ++i) {
  	cin >> n >> k;
    cout << "Case " << i + 1 << ": ";
    cout << josephus(n, k) + 1 << endl;
  }
  return 0;
}
