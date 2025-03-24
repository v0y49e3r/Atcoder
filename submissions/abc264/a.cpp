#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "atcoder";
  int l, r;
  cin >> l >> r;
  for (int i = l - 1; i < r; ++i) {
    cout << s[i];
  }
  return 0;
}
