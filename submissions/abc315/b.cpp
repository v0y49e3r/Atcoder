#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  int sum = 0;
  for (auto &i : v) {
    sum += i;
  }
  int middle_day = (sum + 1) / 2;
  int sumday = 0;
  for (int i = 0; i < n; ++i) {
    sumday += v[i];
    if (sumday >= middle_day) {
      cout << i + 1 << " " << v[i] - (sumday - middle_day);
      return 0;
    }
  }
  return 0;
}
