

#include <bits/stdc++.h>

using namespace std;
int main() {
  string s;
  cin >> s;
  string result = "";
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] != '.') {
      result = result + s[i];
    }
  }
  cout << result;
  return 0;
}
