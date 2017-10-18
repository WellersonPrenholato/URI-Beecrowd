#include <bits/stdc++.h>

using namespace std;

int main() {
string line;
  while (getline(cin, line)) {
    int j = 0;
    for (auto &i: line) {
      if (isalpha(i)) {
        if (j & 1) 
			i = tolower(i);
        else       
			i = toupper(i);
        	j ^= 1;
      }
    }
    cout << line << endl;
  }
  return 0;
}
