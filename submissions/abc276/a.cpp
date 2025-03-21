#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = s.length() - 1; i >= 0; --i) {

    if (s[i] == 'a') {
      cout << i + 1;
      return 0;
    }
  }
  cout << -1;
  return 0;
}
