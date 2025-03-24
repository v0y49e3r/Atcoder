
#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;
const int infinity = INT_MAX;
int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  int min_cost = infinity;
  int min_value = *min_element(v.begin(), v.end());
  int max_value = *max_element(v.begin(), v.end());
  for (int p = min_value; p <= max_value; ++p) {
    int cost = 0;
    for (int i = 0; i < n; ++i) {
      cost += ((v[i] - p) * (v[i] - p));
    }
    min_cost = min(min_cost, cost);
  }
  cout << min_cost;
  return 0;
}
