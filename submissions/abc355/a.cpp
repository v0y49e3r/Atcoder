#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if (a == b) {
    cout << -1;
    return 0;
  }
  cout << 6 - a - b;

  return 0;
}
