#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, p;
  cin >> n >> m >> p;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
    if (m + vec[i] >= p) {
      cout << i + 1;
      return 0;
    }
  }

  return 0;
}
