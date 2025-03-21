#include <bits/stdc++.h>
#include <future>
using namespace std;
#include <string>

int main() {
  int n;
  string s;
  cin >> n >> s;

  for (int i = 0; i < n - 2; ++i) {
    if (s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] == 'C') {
      cout << i + 1;
      return 0;
    }
  }
  cout << -1;
  return 0;
}
