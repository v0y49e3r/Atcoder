#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  for (int i = 0; i + 1 < n; ++i) {
    if (vec[i + 1] - vec[i] <= d) {
      cout << vec[i + 1];
      return 0;
    }
  }
  cout << -1;
  return 0;
}
