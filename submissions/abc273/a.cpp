#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int result = 1;

  for (int i = 1; i <= n; ++i) {
    result = result * i;
  }
  cout << result;
  return 0;
}
