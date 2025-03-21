#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string result;
  for (int i = 1; i <= n; ++i) {

    if (i % 3 == 0) {
      result += "x";
    } else {
      result += "o";
    }
  }
  cout << result;

  return 0;
}
