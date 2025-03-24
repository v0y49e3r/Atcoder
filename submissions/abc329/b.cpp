#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  int max_value = *max_element(vec.begin(), vec.end());
  int ans = 0;
  for (int e : vec) {
    if (e != max_value) {
      ans = max(ans, e);
    }
  }
  cout << ans;

  return 0;
}
