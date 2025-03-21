#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s[0] != '<' or s[s.length() - 1] != '>') {
    cout << "No";
    return 0;
  }
  for (int i = 1; i < s.length() - 1; ++i) {
    if (s[i] != '=') {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}
