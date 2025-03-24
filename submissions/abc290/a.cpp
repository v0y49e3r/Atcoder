#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <stdexcept>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int sum = 0;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }

  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    sum = sum + vec[a - 1];
  }
  cout << sum;

  return 0;
}
