#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;
  int count = 0;
  int local = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'o') {
      count++;
    }
    cout << s[i];
    if (count == k) {
      local = i;
      break;
    }
  }
  for (int i = 1; i < n - local; ++i) {
    cout << 'x';
  }

  return 0;
}
