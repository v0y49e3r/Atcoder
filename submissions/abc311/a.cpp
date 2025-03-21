#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  string s;
  cin >> n >> s;
  bool a = false;
  bool b = false;
  bool c = false;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == 'A') {
      a = true;
    }
    if (s[i] == 'B') {
      b = true;
    }
    if (s[i] == 'C') {
      c = true;
    }
    if (a and b and c) {
      cout << i + 1;
      return 0;
    }
  }

  return 0;
}
