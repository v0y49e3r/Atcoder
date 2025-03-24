#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (n % 2 == 0) {
    cout << "No";
    return 0;
  }
  if (s[(n + 1) / 2 - 1] != '/') {
    cout << "No";
    return 0;
  }
  for (int i = 0; i < (n + 1) / 2 - 1; ++i) {
    if (s[i] != '1') {
      cout << "No";
      return 0;
    }
  }
  for (int i = (n + 1) / 2; i < n; ++i) {
    if (s[i] != '2') {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}
