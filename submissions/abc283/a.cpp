#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int result = a;
  for (int i = 0; i < b - 1; ++i) {
    result = result * a;
  }
  cout << result;

  return 0;
}
