#include <bits/stdc++.h>

using namespace std;

int main() {
	int i;
  	int n; 
while (cin >> n && n) {
    vector<int> a(n);

    for (i=0; i<n;i++){
    	cin >> a[i];
	}
    long long acc = 0, ans = 0;
    for (i = 0; i < n; ++i) {
      acc += a[i];
      ans += llabs(acc); //Valor absoluto
    }
    cout << ans << endl;
  }
  return 0;
}
