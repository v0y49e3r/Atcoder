#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  char a, b;
  cin >> n >> a >> b >> s;
  for (int i = 0; i < n; ++i) {
    if (s[i] != a) {
      cout << b;
      continue;
    }
    cout << s[i];
  }

  return 0;
}
