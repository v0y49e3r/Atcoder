#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (auto &v : vec) {
    cin >> v;
  }
  vector<int> b = vec;
  sort(b.begin(), b.end());
  int target = b[n - 2];
  for (int i = 0; i < n; ++i) {
    if (vec[i] == target) {
      cout << i + 1;
    }
  }
  return 0;
}
