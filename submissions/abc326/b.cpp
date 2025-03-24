#include <bits/stdc++.h>

using namespace std;

bool check(int n) {
  int c100 = n / 100;
  int c10 = n / 10 % 10;
  int c1 = n % 10;
  if (c100 * c10 == c1) {
    return true;
  } else {
    return false;
  }
}
int main() {
  int n;
  cin >> n;
  for (int i = n; i <= 919; ++i) {
    if (check(i)) {
      cout << i;
      return 0;
    }
  }
  return 0;
}
