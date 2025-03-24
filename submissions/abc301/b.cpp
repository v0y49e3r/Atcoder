#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  for (int i = 0; i < n - 1; ++i) {
    if (vec[i] < vec[i + 1]) {
      for (int x = vec[i]; x < vec[i + 1]; ++x) {
        cout << x << " ";
      }
    } else {
      for (int x = vec[i]; x > vec[i + 1]; --x) {
        cout << x << " ";
      }
    }
  }
  cout << vec[n - 1];

  return 0;
}
