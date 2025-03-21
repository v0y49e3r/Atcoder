#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int count = 0;
  vector<int> vec(n);
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end());

  for (int i = 0; i < n; ++i) {
    if (x >= vec[i]) {
      x = x - vec[i];
      count++;
    }
  }
  if (x > 0 and count == n) {
    --count;
  }
  cout << count;

  return 0;
}
