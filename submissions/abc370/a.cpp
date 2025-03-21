#include <bits/stdc++.h>

using namespace std;
int main() {
  int l, r;
  cin >> l >> r;
  if (l == r) {
    if (l == 1 or l == 0) {
      cout << "Invalid";
    }
  }
  if (l != r) {
    if (l == 1) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  }
  return 0;
}
