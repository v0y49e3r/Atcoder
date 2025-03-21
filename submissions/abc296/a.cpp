#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n - 1; ++i) {
    if (s[i] == s[i + 1]) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}
