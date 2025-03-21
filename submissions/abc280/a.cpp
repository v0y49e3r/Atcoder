#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;
  int count = 0;
  for (int i = 0; i < n; ++i) {
    for (int i = 0; i < h; ++i) {
      char c;
      cin >> c;
      if (c == '#') {
        count++;
      }
    }
  }
  cout << count;
  return 0;
}
