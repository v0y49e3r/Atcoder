#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n), t(m);
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> t[i];
  }
  int count = 0;
  for (int i = 0; i < n; ++i) {
    string substring = s[i].substr(3);
    bool check = false;
    for (int j = 0; j < m; ++j) {
      if (substring == t[j]) {
        check = true;
      }
    }
    if (check) {
      count++;
    }
  }
  cout << count;

  return 0;
}
