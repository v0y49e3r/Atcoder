
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;
int main() {
  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  vector<pair<string, int>> p;
  for (auto a : v) {
    p.push_back({a, a.size()});
  }
  vector<int> length(n);
  for (int i = 0; i < n; ++i) {
    length[i] = v[i].size();
  }
  sort(length.begin(), length.end());
  for (int len : length) {
    for (auto a : p) {
      if (a.second == len) {
        cout << a.first;
        break;
      }
    }
  }
  return 0;
}
