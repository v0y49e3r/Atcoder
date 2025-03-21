#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (0 <= n and n <= 125) {
    cout << 4;
  } else if (n >= 126 and n <= 211) {
    cout << 6;
  } else {
    cout << 8;
  }
  return 0;
}
