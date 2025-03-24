#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s[0] < 'A' or s[0] > 'Z') {
    cout << "No";
    return 0;
  }
  for (int i = 1; i < s.length(); ++i) {
    if (s[i] >= 'A' and s[i] <= 'Z') {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}
