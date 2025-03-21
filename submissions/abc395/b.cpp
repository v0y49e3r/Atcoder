
#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<char>> v(n, vector<char>(n, '#'));
  for (int i = 1; i <= n; ++i) {
    int j = n + 1 - i;
    char color = (i % 2 == 1) ? '#' : '.';
    if (i <= j) {
      for (int k = i - 1; k < j; ++k) {
        for (int f = i - 1; f < j; ++f) {
          v[k][f] = color;
        }
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << v[i][j];
    }
    cout << endl;
  }

  return 0;
}
